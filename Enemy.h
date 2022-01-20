
#ifndef CL_ADVENTURE_GAME_ENEMY_H
#define CL_ADVENTURE_GAME_ENEMY_H
#include<string>

using namespace std;

class Enemy {
public:

    Enemy(){}

    Enemy(const string &, int, int);

    void setType(const string &); // set Type of Enemy
    string getType() const; // return Type of Enemy

    void setHp(int); // set Hp
    int getHp() const; // return Hp

    void setMaxHp(int); // set MaxHp
    int getMaxHp() const; // return MaxHp

    void setDamage(int); // set damage points
    int getDamage() const; // return damage points

    void setDead();
    bool getAlive() const;

    void setAttackChances(int);
    int getAttackChances() const;

    void printSp();
    void setSp(const string &);
    string getSp() const;

protected:
    string enemyType;
    string sp;

    int attackChances;
    int hitPoints;
    int maxHitPoints;
    int damagePoints;
    bool alive = true;
};


class Goblin : public Enemy {
public:

    Goblin(){
        this->setMaxHp(10);
        this->setDamage(2);
        this->setHp(10);
        this->setType("Goblin");
        this->setSp(goblinSp);

    };
protected:
    string goblinSp = "         &/*****&&         \n"
                      "      .&***********&%. ,   \n"
                      " %*(//****/**********/**@  \n"
                      "      %**,.***,.***@(      \n"
                      "       *#******/*(@        \n"
                      "       /(@/*((*%((&%%&&    \n"
                      "  &%%%%%%&(/*/@((@%%%&@&%# \n"
                      " %&@%%%%%%%@@%%%%%%%@****//\n"
                      " @**&&%%%%%%&&%%%%%& @****@\n"
                      "%%**@*,%%%%%&&%%%%%,  @***&\n"
                      "@**& ,@@@@@@@&%&@@@ ,****/*\n"
                      "@**(* @%%%%%@@%%%%%%@&**/@ \n"
                      " &***(@&&@@&&@&%%%%&%      \n"
                      "  &**#@&&@@,  (&&&&@       \n"
                      "   ., @&&&@    &&&&@%      \n"
                      "   .@@@@@@@   .&&&&&&      \n"
                      "   %@@@@@@*   .@@@@@@      \n"
                      "      ,,.     %@@@@@@@     \n"
                      "               (@@@@@,     ";

};



class Undead : public Enemy {
public:

    Undead(){
        this->setMaxHp(6);
        this->setDamage(3);
        this->setHp(6);
        this->setType("Undead");
        this->setSp(undeadSp);

    };
protected:
    string undeadSp ="                      #,.  .*\n"
                     "           .                *\n"
                     "      */#* %%@%#%%#&(/     /     *\n"
                     "       ,%./        ,       ./(,     /,\n"
                     "  . .&       .         /   /     (   . ,\n"
                     "   /, . .                , %(      ,,,*\n"
                     "  # .*                       #\n"
                     "  ,  .       *                %\n"
                     " #    .,,*,    ((*    #      ,%\n"
                     " / .(     *    *,    .%(     , *\n"
                     "  , *&   &/     ( ,, ,      ,  #\n"
                     "  *(        % &/   ,  (#   , #*\n"
                     "   .,         *#, , ,, #   / ,\n"
                     "    .(    ,%./#&/&&%,,    &\n"
                     "     *&  (/./,, ,   (.,#(  #\n"
                     "   #.   *.%,,,,,./.  . .   %\n"
                     "  ,     / /%         .# (( #\n"
                     "    (.    ,                #\n"
                     "          ,                (\n"
                     "          ,                #\n"
                     "          ,         %/*&*#.(\n"
                     "          &,,,,*%((,,     #\n"
                     "          ,      #,        ,\n"
                     "         #       #  &      #\n"
                     "         ,##*/&(%    *  (%,*\n"
                     "        #     *        ,.* \n"
                     "         *%#,          /..,#,";

};




class Zealot : public Enemy {
public:

    Zealot(){
        this->setMaxHp(5);
        this->setDamage(6);
        this->setHp(5);
        this->setType("zealot");
        this->setSp(zealotSp);

    };
protected:
    string zealotSp ="                ,#%/,*,#/  \n"
                     "              /*,,,*.,,,,*/\n"
                     "            /*,,,,,,,,.,,,,/\n"
                     "          /@/*,,,&@&(,,.,,,**/\n"
                     "        ,**#/*@@@&@&@&&&*/*//,*\n"
                     "        &*,,#@@@*//*%&&@&%/,,.#(/\n"
                     "      ,*,*(,*((*,,,,,/./,,,*/,,,,,\n"
                     "     ,(,,,,*#(*/,#**,*.//#,.,,*,,#,\n"
                     "     #,,,%(,,***,*,/./**,,..,,/*/,/\n"
                     "    #,,,**#,,.***,(/*,/.......%*,,/\n"
                     "   .(,,,,/*,(,%(,,#,((/,,,..../,,,*.\n"
                     "   #,,,,,,(/*,,,.#,*..,..,**#%,,,,,.\n"
                     "   %,,,,,,,**,.,,,,.,.,**/%%.,,*,,,/\n"
                     "  /(,,,,,**##%%##(*,....,,/%##%,,,,(\n"
                     "  .(#,,/(*/*,,.,(%*,*(/**((./**/,(\n"
                     "  .%,**(*%%%%#//**,.,,.,..,,,,/,#,,/.\n"
                     "   (,/*(((#,,.,,..........,(,,,,./,,&\n"
                     "  (,/*/#((,,,,(,,,,,..,,..,#,,,/#(/,*.\n"
                     "  &,/#/%&,,,***,,**,%(//******,(/*(,,,\n"
                     "  #/%#,##,,,,,,,,,,.%*(,,,,.,,,.,#(,*\n"
                     "  //%#*(,//,,,,,*((*/*(,,*(*,,,,/#*,,\n"
                     "   .,/*%,,/(/(%#(*,****,,(*/(%%(*%\n"
                     "      (,,*/*,,,,,#**////%(,*(/,,,/\n"
                     "      (//((**.     ..      .,.###,     ";


};





#endif //CL_ADVENTURE_GAME_ENEMY_H
