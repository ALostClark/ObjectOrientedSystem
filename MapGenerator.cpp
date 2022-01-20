//
// Created by Student on 21/03/2019.
//

#include "MapGenerator.h"
#include <iostream>



using namespace std;

void MapGenerator::generate() {

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

            if (i == 0 || i == 7 || j == 0 || j == 7){
                layout[i][j] = 0;  // border
            } else{
                int v2 = rand() % 100 + 1;

                if (v2>=65){
                    layout[i][j] = 0;
                }else{
                    layout[i][j] = randomRoomType();
                }
            }
        }
    }
    layout[1][1] = 1;
    layout[6][6] = 4;

}


int MapGenerator::getTile(int i, int j) const {
    return layout[i][j];
}


void MapGenerator::printMap() {


    int mapCounter = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

            if (mapCounter == 8) {
                std::cout << "" << std::endl;
                mapCounter = 0;
            }

            std::cout << getTile(i, j);


            mapCounter++;
        }
    }

}

int MapGenerator::randomRoomType() const {

    int v2 = rand() % 100 + 1;

    if (v2>=35){
        return 2;
    }else{
        return 3;
    }



}