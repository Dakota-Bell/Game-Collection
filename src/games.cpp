#include "games.h"

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

std::string games::getTitle()
{
    return title;
}

std::string games::getReleaseDate()
{
    return releaseDate;
}

double games::getPrice()
{
    return price;
}

char games::getRating()
{
    return rating;
}