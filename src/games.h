/*
* Program: games.h
* Description: Object class to hold information about specific video games
* Date: 12/21/2024
* Author: Daktoa Bell*/
#ifndef GAMES_H
#define GAMES_H


#include <vector>
#include <string>

class games
{
    public:
        void setTitle(std::string);
        void setReleaseDate(std::string);
        void setPrice(double);
        void setRating(char);

        std::string getTitle();
        std::string getReleaseDate();
        double getPrice();
        char getRating();

    private:
        std::string title;
        std::string releaseDate;
        double price;
        char rating;

};

#endif