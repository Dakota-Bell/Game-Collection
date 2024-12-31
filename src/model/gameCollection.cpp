#include "gameCollection.h"

void GameCollection::addGame()
{
    std::ofstream outfile("gameInfo.txt");
    games myObj;
    std::string n; double p; char r;
    std::cout<<"Enter the title: "; getline(std::cin, n); myObj.setTitle(n); n = " ";
    std::cout<<"Enter release date (MM/DD/YYYY): "; getline(std::cin, n); myObj.setReleaseDate(n);
    std::cout<<"Enter the price of the game: $"; std::cin>>p; myObj.setPrice(p);
    std::cout<<"Enter ESRB rating: "; std::cin>>r; myObj.setRating(r);
    gameCollection.push_back(myObj);
    outfile << myObj << std::endl;
}//end addGame

void GameCollection::displayGames()
{
    std::cout<<"Info about your games"<<std::endl<<std::endl;
    for(int i = 0; i < gameCollection.size(); i++)
    {
        std::cout<<gameCollection[i]<<std::endl;
    }
}//end displayGames

void GameCollection::removeGame(std::string str)
{
    //Iterator set equal to the title of the game to be removed from the list
    auto it = std::find(gameCollection.begin(), gameCollection.end(), str);

    std::ofstream outfile("gameInfo.txt");


    if(it != gameCollection.end())// goes through the list until it finds game title
    {
	gameCollection.erase(it); // removes game object from the gameCollection vector object
	if(outfile.is_open()) /* if you're at the string of the game, delete the info about the game
				      which includes the attributes from games.h */
	{
	    std::cout<<"File is open"<<std::endl;
	}
    }
    else
	std::cout<<"Game with title "<<str<<" has been removed"<<std::endl;
    outfile.close();
}//end removeGame
