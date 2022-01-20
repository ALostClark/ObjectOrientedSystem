//
// Created by Student on 21/03/2019.
//

#ifndef CL_ADVENTURE_GAME_MAPGENERATOR_H
#define CL_ADVENTURE_GAME_MAPGENERATOR_H


class MapGenerator {

public:

    void generate();


    int getTile(int, int) const;
    int randomRoomType() const;


    void printMap();
private:

    int layout[8][8];

};


#endif //CL_ADVENTURE_GAME_MAPGENERATOR_H
