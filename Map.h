
#ifndef CL_ADVENTURE_GAME_MAP_H
#define CL_ADVENTURE_GAME_MAP_H


class Map {
public:
    Map();


    void setLayout(int, int, int);

    int getTile(int, int) const;

    void printMap();

private:

    int layout[8][8];

};


#endif //CL_ADVENTURE_GAME_MAP_H
