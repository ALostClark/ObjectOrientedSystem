
#include "Enemy.h"
#include<string>
#include <iostream>
using namespace std;

Enemy::Enemy(const string &type, int hp, int damage) : enemyType(type), hitPoints(hp), damagePoints(damage)
{
    maxHitPoints = hp;
}

void Enemy::setType(const string &type)
{
    enemyType = type;
} // end function setType

// return first name
string Enemy::getType() const
{
    return enemyType;
} // end function getType


void Enemy::setHp(int hp)
{
    hitPoints = hp;
} // end function setHp

// return Hp
int Enemy::getHp() const
{
    return hitPoints;
} // end function getHp


void Enemy::setMaxHp(int hp)
{
    hitPoints = hp;
} // end function setHp

// return Hp
int Enemy::getMaxHp() const
{
    return maxHitPoints;
} // end function getHp


void Enemy::setAttackChances(int x)
{
    attackChances = x;
}


int Enemy::getAttackChances() const
{
    return attackChances;
}


void Enemy::setDamage(int damage)
{
    damagePoints = damage;
} // end function Damage

// return Damage
int Enemy::getDamage() const
{
    return damagePoints;
} // end function getDamage




bool Enemy::getAlive() const
{
    return alive;
} // checking if the Enemy is alive

void Enemy::setDead() {
    std::cout << "Enemy has died " << "\n";
    alive = false;
}



void Enemy::setSp(const string &inputSp)
{
    sp = inputSp;
} // end function setType

// return first name
string Enemy::getSp() const
{
    return sp;
} // end function getType

void Enemy::printSp() {
    std::cout << sp << "\n";
}