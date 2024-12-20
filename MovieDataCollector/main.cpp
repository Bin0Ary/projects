#include <iostream>
#include "movies.h"
void add_movies(movies &Movies, std::string name, int rating, int watched);
void increment(movies& Movies, std::string name);
int main() {
	movies my_movies;
	add_movies(my_movies, "Star Wars", 5, 2);
	add_movies(my_movies, "Harry Potter", 10, 200);
	increment(my_movies, "Star Wars");
	add_movies(my_movies, "Harry Potter", 10, 200);
	increment(my_movies, "War");
	my_movies.display_movies();
}

void add_movies(movies& Movies, std::string name, int rating, int watched)
{
	if (Movies.add_movies(name, rating, watched)) {
		std::cout << "Movie added" << std::endl;
	}
	else {
		std::cout << "Movie already exists" << std::endl;
	}
}

void increment(movies& Movies, std::string name)
{
	if (Movies.increment_watched(name)) {
		std::cout << "Watched incremented" << std::endl;
	}
	else {
		std::cout << "Movie does not exist" << std::endl;
	}
}
