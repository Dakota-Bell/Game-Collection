#include <iostream>
#include "model/gameCollection.cpp"

// DECLARATION
void menu();

// DRIVER
int main()
{
    std::cout << "\n I'm working!" << std::endl; // test line
    int choice;
    std::string rmGame;

    games myGame; // game obj to hold info on a game
    GameCollection myCollection;// Collection of games objects

    while(choice != 4)
    {
	menu();
	std::cout<<"Enter your choice here: "; std::cin>>choice; std::cout<<std::endl;
	std::cin.ignore();
	    switch(choice)
	    {
	        case 1:
	            myCollection.addGame(); std::cout<<std::endl;
		    break;
	        case 2:
		    myCollection.displayGames(); std::cout<<std::endl;
		    break;
	        case 3:
		    std::cout<<::std::endl<<"Enter the name of the game you want to remove from your collection: ";
		    std::getline(std::cin, rmGame); std::cin.ignore();
		    myCollection.removeGame(rmGame);
		    break;
		case 4:
		    break;
	        default:
		    std::cout<<"Invalid Entry"<<std::endl;
		    std::cin>>choice; std::cin.ignore();
		    break;
	    };
    }

    return 0;
}

// DEFINITION
void menu()
{
    std::cout<<"1. Add Game"<<std::endl;
    std::cout<<"2. View Game Collection"<<std::endl;
    std::cout<<"3. Remove Game From Collection"<<std::endl;
    std::cout<<"4. Quit"<<std::endl;
}
