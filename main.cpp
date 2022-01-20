#include <iostream>
#include<string>
#include <iostream>
#include "Enemy.h"
#include "Player.h"
#include "Battle.h"
#include "Map.h"
#include "Run.h"
#include "MapGenerator.h"

int main() {

    std::string userName = "...";
    std::string description = "...";

    std::cout << R"(
==========================================================================
 __          __  _ _                            _______
 \ \        / / | | |                          |__   __|
  \ \  /\  / /__| | | ___ ___  _ __ ___   ___     | | ___
   \ \/  \/ / _ \ | |/ __/ _ \| '_ ` _ \ / _ \    | |/ _ \
    \  /\  /  __/ | | (_| (_) | | | | | |  __/    | | (_) |
   __\/  \/ \___|_|_|\___\___/|_| |_| |_|\___|    |_|\___/           _
  / _(_)   | |          / _| | | | |                                | |
 | |_ _ ___| |_    ___ | |_  | |_| |__   ___   _ __ ___   ___  _ __ | | __
 |  _| / __| __|  / _ \|  _| | __| '_ \ / _ \ | '_ ` _ \ / _ \| '_ \| |/ /
 | | | \__ \ |_  | (_) | |   | |_| | | |  __/ | | | | | | (_) | | | |   <
 |_| |_|___/\__|  \___/|_|    \__|_| |_|\___| |_| |_| |_|\___/|_| |_|_|\_\

==========================================================================)";



    std::cout << ("\nIn put name\n");
    std::cin >> userName;
    std::cout << ("\nIn this game you will be playing as a monk\n");


    Player player(userName, 15 , 3);
    player.printSp();

    std::cout << ("\nWhat is your back story?\n");
    std::cin >> description;

    player.setDescription(description);

    std::cout << ("\nName: " + player.getName() + "\n");

    Map map;

    MapGenerator mapGenerator;
    mapGenerator.generate();

    for (int i = 0; i <8; i++) {
        for (int j = 0; j < 8; j++) {

            map.setLayout(mapGenerator.getTile(i,j),i,j);
        }
    }

    Run run(&map, &player);

    while (run.getRunning()&& player.getAlive()){

        run.playerMove();

    }

    std::cout << "\nGame over " ;

    if ( player.getAlive()){

        std::cout << "\nWell done: " + player.getName() + "\n";
        std::cout << player.getDescription() + "\n";
    } else{
        std::cout << "\nUnlucky: " + player.getName() + " Better luck next time!\n";
    }





    return 0;
}




/*
system("cls"); //Clears the screen
system("pause"); //Press any key to continue
 */