#pragma once
#include <iostream>
#include <string>
class movie {
	friend class movies;
private:
	std::string name;
	int rating;
	int watched;
public:
	// Methods
	void display_movie() const;
	// Constructor
	movie();
	movie(std::string name);
	movie(std::string name, int rating);
	movie(std::string name, int rating, int watched);
	// Destructor
	~movie();
};
