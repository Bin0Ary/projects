#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "movie.h"
class movies {
private:
	std::vector <movie> Movies;
public:
	// Constructor
	movies();
	// Destructor
	~movies();
	// Methods
	bool add_movies(std::string name, int rating, int watched);
	bool increment_watched(std::string name);
	void display_movies();
};