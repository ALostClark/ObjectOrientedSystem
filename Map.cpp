

#include "Map.h"
#include <iostream>



using namespace std;


Map::Map()
{

}


int Map::getTile(int i, int j) const
{
    return layout[i][j];
}

void Map::setLayout(int mapInput, int i, int j) {
    layout[i][j] = mapInput;
}

void  Map::printMap() {


    int mapCounter = 0;
    for (int i = 0; i <8; i++) {
        for (int j = 0; j < 8; j++) {

            if (mapCounter == 8){
                std::cout << "" << std::endl;
                mapCounter = 0;
            }

            std::cout << getTile(i,j);


            mapCounter++;
        }
    }


}