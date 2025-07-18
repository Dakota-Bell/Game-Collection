#include "games.h"

std::ostream& operator<<(std::ostream& os, const games& rhs) // used to help with the displayGames() method in gameCollection.cpp
{
    os<<"Title: "<<rhs.getTitle()<<std::endl
    <<"Release Date: "<<rhs.getReleaseDate()<<std::endl
    <<"Price: $"<<rhs.getPrice()<<std::endl
    <<"ESRB Rating: "<<rhs.getRating()<<std::endl;
    return os;
}

bool operator==(const games& lhs, const std::string& rhs)
{
    return (lhs.getTitle() == rhs);
}

void games::setTitle(std::string t)
{
    title = t;
}

void games::setReleaseDate(std::string rd)
{
    releaseDate = rd;
}

void games::setPrice(double p)
{
    price = p;
}

void games::setRating(char r)
{
    rating = r;
}

std::string games::getTitle()const
{
    return title;
}

std::string games::getReleaseDate()const
{
    return releaseDate;
}

double games::getPrice()const
{
    return price;
}

char games::getRating()const
{
    return rating;
}
