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
    private:
        std::vector<games> gameCollection; // hold a collection of games objects

    public:
        void addGame();
        void displayGames();
        void removeGame(std::string);
};

#endif
