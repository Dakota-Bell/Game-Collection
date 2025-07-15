#ifndef GAME_COLLECTION_H
#define GAME_COLLECTION_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <fstream>
#include "games.cpp"

class GameCollection
{
    private:// hold a collection of games objects
        std::vector<games> gameCollection;

    public:
        void addGame();
        void displayGames();
        void removeGame(std::string);
};

#endif
