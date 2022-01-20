

#ifndef CL_ADVENTURE_GAME_BATTLE_H
#define CL_ADVENTURE_GAME_BATTLE_H

#include "Player.h"
#include "Enemy.h"
#include<string>

using namespace std;

class Battle {

public:

    Battle(Player*, Enemy*);


    void playerAttack(); // players attack
    void playerDefend(); // players attack

    void enemyAttack(); // enemy attack
    void enemyDefend(); // enemy attack

    bool hit();

private:
    Player* player;
    Enemy* enemy;

};


#endif //CL_ADVENTURE_GAME_BATTLE_H
