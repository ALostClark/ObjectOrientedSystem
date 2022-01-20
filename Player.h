

#ifndef CL_ADVENTURE_GAME_PLAYER_H
#define CL_ADVENTURE_GAME_PLAYER_H
#include<string>

using namespace std;

class Player {
public:

    Player(const string &, int, int);

    void setName(const string &); // set Type of Enemy
    string getName() const; // return Type of Enemy


    void setDescription(const string &); // set Type of Enemy
    string getDescription() const; // return Type of Enemy


    void setHp(int); // set Hp
    int getHp() const; // return Hp


    void setMaxHp(int); // set MaxHp
    int getMaxHp() const; // return MaxHp


    void setDamage(int); // set damage points
    int getDamage() const; // return damage points

    void setDead();
    bool getAlive() const;

    void printSp() const;


private:
    string playerName;
    string description;
    int hitPoints;
    int maxHitPoints;
    int damagePoints;
    bool alive = true;

    string monkSp = "    *&((((((&/\n"
                    " .@((((((((((((%\n"
                    "*((((((**,(((/,(&\n"
                    "(((((,,,,,,,,,,,,,\n"
                    " ,*#(*,,,,   ,, #/\n"
                    " /,,(,,,,,  .,,,,(\n"
                    "  /,,,,,,,,,@,,,\n"
                    "    .@@#/,,,,%*\n"
                    " .@/@/////@*@//@\n"
                    "#//&//////@///(/*\n"
                    "@//@#////%%///&@/@,\n"
                    ",,,@///((///////@\n"
                    "/,&////////%@@&(&\n"
                    "  @&&&&  @@@@&@\n"
                    "  @&@@@  %&&@&* ";
};


#endif //CL_ADVENTURE_GAME_PLAYER_H
