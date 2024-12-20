#include "movies.h"


movies::movies()
{
}

movies::~movies()
{
}

bool movies::add_movies(std::string name, int rating, int watched)
{
	for (movie p : Movies) {
		if (p.name == name) {
			return false;
		}
	}
	Movies.push_back(movie(name, rating, watched));
	return true;
}

bool movies::increment_watched(std::string name)
{
	for (movie &p : Movies) {
		if (p.name == name) {
			p.watched++;
			return true;
		}
	}
	return false;
}

void movies::display_movies() 
{
	for (movie p : Movies) {
		p.display_movie();
	}
}
