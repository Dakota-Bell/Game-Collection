/*
* Program: games.h
* Description: Object class to hold information about specific video games
* Date: 12/21/2024
* Author: Daktoa Bell*/
#ifndef GAMES_H
#define GAMES_H

#include <string>
#include <ostream>

class games
{
    public:
        friend std::ostream& operator<<(std::ostream&, const games&);
        friend bool operator==(const games&, const std::string&);
    // Needs to be a friend so that it can access private members of the class

        void setTitle(std::string);
        void setReleaseDate(std::string);
        void setPrice(double);
        void setRating(char);

    // const prevents the object from being modified when calling these methods
        std::string getTitle()const;
        std::string getReleaseDate()const;
        double getPrice()const;
        char getRating()const;

    private:
        std::string title;
        std::string releaseDate;
        double price;
        char rating; //ESRB Rating

};

#endif