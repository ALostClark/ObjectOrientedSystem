
#include "Battle.h"
#include <stdlib.h>
#include <iostream>


using namespace std;

Battle::Battle(Player* player, Enemy* enemy)
{
    this->player = player;
    this->enemy = enemy;
}




bool Battle::hit()
{
    int v2 = rand() % 100;
    if (v2>=50){  // MISS %
        return true;
    }else{
        std::cout << ("Fail to move\n");
        return false;
    }

}



void Battle::enemyAttack()
{
    if (hit()) {

        player->setHp(player->getHp() - enemy->getDamage());

        if (player->getHp()<=0) {
            player->setDead();
        }
    }
}

void Battle::enemyDefend()
{
    if (hit()) {
        enemy->setHp(enemy->getHp() + 1);

        if (enemy->getHp()<=0) {
            enemy->setDead();
        }

    }
}


void Battle::playerAttack()
{
    if (hit()) {
        enemy->setHp(enemy->getHp() - player->getDamage());

        if (enemy->getHp()<=0) {
            enemy->setDead();
        }
    }
}

void Battle::playerDefend()
{
    if (hit()) {
        player->setHp(player->getHp() + 1);

        if (player->getHp()<=0) {
            player->setDead();
        }
    }
}



