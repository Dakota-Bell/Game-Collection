#include "games.cpp"
#include <iostream>

int main()
{
    std::cout << "\n I'm working!" << std::endl;

    games myGame;
    std::string chosenGame;

    std::cout << "Enter the game title: ";
    std::getline(std::cin, chosenGame);

    myGame.setTitle(chosenGame); std::cout<< std::endl;
    std::cout << "You entered: " << myGame.getTitle();

    std::vector<games> gameCollection;

    return 0;
}