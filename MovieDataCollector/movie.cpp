#include "movie.h"

void movie::display_movie() const
{
	std::cout << name << " " << rating << " " << watched << "\t";
}

movie::movie()
	: movie {"None", 0 , 0}
{
}

movie::movie(std::string name)
	: movie {name, 0, 0}
{
}

movie::movie(std::string name, int rating)
	: movie { name, rating, 0}
{
}

movie::movie(std::string name, int rating, int watched) :
	name{ name }, rating{ rating }, watched{ watched }
{
}

movie::~movie()
{
}
