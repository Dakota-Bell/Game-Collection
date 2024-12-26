#include "gameCollection.h"

void GameCollection::addGame()
{
    games myObj;
    std::string n; double p; char r; std::cin.ignore();
    std::cout<<"Enter the title: "; getline(std::cin, n); myObj.setTitle(n); n = " ";
    std::cout<<"Enter release date (MM/DD/YYYY): "; getline(std::cin, n); myObj.setReleaseDate(n);
    std::cout<<"Enter the price of the game: $"; std::cin>>p; myObj.setPrice(p);
    std::cout<<"Enter ESRB rating: "; std::cin>>r; myObj.setRating(r);
    gameCollection.push_back(myObj);
}

void GameCollection::displayGames()
{
    std::cout<<"Info about your games"<<std::endl<<std::endl;
    for(int i = 0; i < gameCollection.size(); i++)
    {
        std::cout<<gameCollection[i]<<std::endl;
    }
}

void GameCollection::removeGame(std::string n)
{
    /* based on the parameter passed in, go to the game and
       remove it from the vector*/

    //Iterator set equal to the title of the game to be removed from the list
    auto it = std::find(gameCollection.begin(), gameCollection.end(), n);

    if(it != gameCollection.end())// goes through the list until it finds game title
        gameCollection.erase(it); // removes game object from the gameCollection vector object
}

