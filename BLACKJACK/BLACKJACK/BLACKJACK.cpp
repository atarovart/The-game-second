#include <iostream>
#include <vector>
#include "BlackJack.h"

int main()
{
    std::vector<std::string> playerNames = { "Geralt" };
    Game* game = new Game(playerNames);
    bool isInProgress = true;
    while (isInProgress)
    {
        game->Play();
        std::cout << "\nPlay another game? (Y/N): ";
        bool formatCheck = true;
        std::string input;
        std::getline(std::cin, input);
        if (std::cin && (input == "N" || input == "n")) isInProgress = false;
        else if (std::cin && (input == "Y" || input == "y")) isInProgress = true;
        else
        {
            //system("cls");
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Incorrect input!";
        }
    }
    delete game;
    return 0;
}
