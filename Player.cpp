
#include <iostream>
#include "Player.h"
#include<string>

using namespace std;

Player::Player(const string &name, int hp, int damage) : playerName(name), hitPoints(hp), damagePoints(damage)
{
    maxHitPoints = hp;
}

// set name
void Player::setName(const string &name)
{
    playerName = name;
} // end function setName


// return first name
string Player::getName() const
{
    return playerName;
} // end function getName


void Player::setDescription(const string &inPutDescription) {

    description = inPutDescription;
}

string Player::getDescription() const {
    return description;
} // end function getName



void Player::setHp(int hp){
    hitPoints = hp;
} // end function setHp

// return Hp
int Player::getHp() const
{
    return hitPoints;
} // end function getHp


void Player::setMaxHp(int hp)
{
    hitPoints = hp;
} // end function setHp

// return Hp
int Player::getMaxHp() const
{
    return maxHitPoints;
} // end function getHp




void Player::setDamage(int damage)
{
    damagePoints = damage;
} // end function Damage

// return Damage
int Player::getDamage() const
{
    return damagePoints;
} // end function getDamage


bool Player::getAlive() const
{
    return alive;
} // checking if the player is alive

void Player::setDead(){
        alive = false;
}


void Player::printSp() const {
    std::cout << monkSp;
}