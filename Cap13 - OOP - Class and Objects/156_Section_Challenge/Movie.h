//
// Created by Pedro Pereira on 23/09/2025.
//

#ifndef MOVIE_H
#define MOVIE_H

#include "Movies.h"

using namespace std;


class Movie
{
private:

public:
  void addMovie(string movie_name, string movie_rating, int watched_times);
  void removeMovie(string movie_name);
  void displayAllMovies(); //ok
  bool isInMoviesCollection(string movie_name);
  void IncrementWatchedTimes(string movie_name,int watched_times);
};

#endif //MOVIE_H
