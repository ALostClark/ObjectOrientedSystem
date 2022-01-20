
#include "Battle.h"
#include <stdlib.h>
#include <iostream>
#include "Map.h"
#include "Run.h"
#include "Enemy.h"
#include "Player.h"
#include <string>
#include <random>

using namespace std;

Run::Run(Map*map, Player* player)
{
    this->player = player;
    this->map = map;

    for (int i = 0; i <8; i++) {
        for (int j = 0; j < 8; j++) {

            if (map->getTile(i, j) == 1){
                setPosition(i,j);
            }
        }
    }

}

void Run::stopRunning() {
    running = false;
}

bool Run::getRunning() {
    return running;
}

bool Run::goRightCheck() {

    if (map->getTile(getPositionY(),getPositionX()+1) > 0){
        return true;
    } else{
        return false;
    }
}

bool Run::goLeftCheck() {

    if (map->getTile(getPositionY(),getPositionX()-1) > 0){
        return true;
    } else{
        return false;
    }
}

bool Run::goUpCheck() {
    if (map->getTile(getPositionY()-1,getPositionX()) > 0){
        return true;
    } else{
        return false;
    }
}

bool Run::goDownCheck() {
    if (map->getTile(getPositionY()+1,getPositionX()) > 0){
        return true;
    } else{
        return false;
    }
}


void Run::setPosition(int y, int x) {
   positionY = y;
   positionX = x;
}



void Run::moveRight() {
    if (goRightCheck()){
        std::cout << ("Moving to right room\n");
        setPosition(getPositionY(),getPositionX()+1);
        encounters();
    } else{
        std::cout << ("Fail to move right: No door \n");
    }
}


void Run::moveLeft() {
    if (goLeftCheck()){
        std::cout << ("Moving to left room\n");
        setPosition(getPositionY(),getPositionX()-1);
        encounters();
    } else{
        std::cout << ("Fail to move left: No door \n");
    }
}


void Run::moveUp() {
    if (goUpCheck()){
        std::cout << ("Moving to upwards room\n");
        setPosition(getPositionY()-1,getPositionX());
        encounters();
    } else{
        std::cout << ("Fail to move upwards : No door \n");
    }
}


void Run::moveDown() {
    if (goDownCheck()){
        std::cout << ("Moving to downwards room\n");
        setPosition(getPositionY()+1,getPositionX());
        encounters();
    } else{
        std::cout << ("Fail to move downwards: No door \n");
    }
}


int Run::getPositionX() const{
    return positionX;
}


int Run::getPositionY() const{
    return positionY;
}



void Run::playerMove(){

    std::cout << "\nWhat would you like to do" << "\n";
    std::cout << "Go left:        1" << "\n";
    std::cout << "Go right:       2" << "\n";
    std::cout << "Go up:          3" << "\n";
    std::cout << "Go Down:        4" << "\n";
    std::cout << "Use the bible:  5" << "\n";
    std::cout << "Print map:      6" << "\n";

    std::string userInput;
    std::cin >> userInput;


    if (userInput == "1"){
        moveLeft();

    } else if (userInput == "2"){
        moveRight();

    }else if (userInput == "3"){
        moveUp();

    }else if (userInput == "4"){
        moveDown();

    }else if (userInput == "5"){

        if (player->getHp() == player->getMaxHp()){
            std::cout << "You HP is already at it max " << "\n";
        } else{
            std::cout << "You have stated to pray.. " << "\n";
            player->setHp(player->getMaxHp());
        }
    }else if (userInput == "6"){
        map->printMap();
    }else{
        std::cout << "Invalid move " << "\n";
    }






}




void Run::encounters() {

    std::cout << "\nX: " << getPositionX();
    std::cout << "\nY: " << getPositionY() << "\n";


    switch (map->getTile(getPositionY(),getPositionX())) {

        case 1:
            std::cout << "This is the stating room\n";
            break;

        case 2:
            std::cout << "There is a monster in this room\n";
            startEncounter();

            break;

        case 3:
            std::cout << "This Room is empty\n";

            break;

        case 4:
            std::cout << "LOOK THERE IS TREASURE\n";
            stopRunning();

            break;

    }
    map->setLayout(3, getPositionY(),getPositionX()); // sets the room to empty

}



void Run::startEncounter() {


    Enemy enemy;

    int randNum = rand() % 3;

    if (randNum == 0){

        enemy = Undead();

    }else if (randNum == 1 ){
        enemy = Zealot();

    }else {

        enemy = Goblin();
    }




    enemy.printSp();

    Battle battle(player,&enemy);

    while (enemy.getAlive()&& player->getAlive()){

        std::cout << enemy.getType()<<"'s Hp: " << enemy.getHp() << "\n";
        std::cout << "Your Hp: " << player->getHp() << "\n";

        std::cout << "\nWhat would you like to do" << "\n";
        std::cout << "Attack: 1" << "\n";
        std::cout << "Defend: 2" << "\n";

        std::string userInput;
        std::cin >> userInput;

        if (userInput == "1"){
            battle.playerAttack();
        } else if (userInput == "2"){
            battle.playerDefend();

            if (!enemy.getAlive()){
            }
        }else{
            std::cout << "Invalid move " << "\n";
        }

            // enemy turn
        int v2 = rand() % 100 + 1;
        if (v2>=enemy.getAttackChances()){
            std::cout << "The " << enemy.getType()<< " is attacking"  << "\n";
            battle.enemyAttack();
            enemy.setAttackChances(enemy.getAttackChances()+10);
        }else{
            std::cout << "The \" << enemy.getType()<< \" is defending"  << "\n";
            battle.enemyDefend();
            enemy.setAttackChances(enemy.getAttackChances()-20);
        }

    }
}
