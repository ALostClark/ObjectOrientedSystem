
#ifndef CL_ADVENTURE_GAME_RUN_H
#define CL_ADVENTURE_GAME_RUN_H

#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Battle.h"
#include "Enemy.h"
#include<string>

using namespace std;

class Run {

public:

    Run(Map*,Player*);

    void setPosition(int, int);


    int getPositionX() const;
    int getPositionY() const;

    bool getRunning();
    void stopRunning();

    bool goRightCheck();
    bool goLeftCheck();
    bool goUpCheck();
    bool goDownCheck();

    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();

    void encounters();
    void startEncounter();

    void playerMove();

private:
    Player* player;
    Map* map;

    int positionX;
    int positionY;

    bool running = true;

};


#endif //CL_ADVENTURE_GAME_RUN_H
