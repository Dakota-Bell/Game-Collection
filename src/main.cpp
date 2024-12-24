#include "model/gameCollection.cpp"

// DECLARATION
void menu();

// DRIVER
int main()
{
    std::cout << "\n I'm working!" << std::endl; // test line
    int choice;

    games myGame; // game obj to hold info on a game
    GameCollection myCollection;// Collection of games objects

    myCollection.addGame(); std::cout<<std::endl;
    myCollection.displayGames(); std::cout<<std::endl;
    myCollection.removeGame("Uncharted 4"); std::cout<<std::endl;
    myCollection.displayGames();

    return 0;
}

// DEFINITION
void menu()
{
    std::cout<<"1. Add Game"<<std::endl;
    std::cout<<"2. View Game Collection"<<std::endl;
    std::cout<<"3. Quit"<<std::endl;
}