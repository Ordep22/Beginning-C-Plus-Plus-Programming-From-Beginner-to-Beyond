//
// Created by Pedro Pereira on 23/09/2025.
//

#include "Movie.h"

vector <Movies> movieCatalogue; //Review more about inline.

void Movie::addMovie(string movie_name, string movie_rating, int watched_times)
{
  Movies movieList;
  movieList.movie_name = movie_name;
  movieList.movie_rating= movie_rating;
  movieList.watched_times= watched_times;
  movieCatalogue.push_back(movieList);
}


void Movie::displayAllMovies()
{
  cout << "-------------------------- Movie Cataloge -------------------------------" << endl;
  for (int i = 0; i < movieCatalogue.size(); i++)
  {
    cout << " -> Movie name: " << movieCatalogue[i].movie_name<< "\n" << endl;
    cout << " -> Movie rating: " << movieCatalogue[i].movie_rating<< "\n" << endl;
    cout << " -> Movie whatched times: "<<movieCatalogue[i].watched_times<< "\n" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
  }
}

bool Movie::isInMoviesCollection(string movie_name)
{
  bool foundmovie = false;
  for(int i = 0; i < movieCatalogue.size(); i++)
  {
    if(movieCatalogue[i].movie_name == movie_name)
    {
      //cout << "Found movie " << movie_name << endl;
      foundmovie = true;
    }
    else
    {
      //cout << "No movie name <" << movie_name << endl;
      foundmovie = false;
    }
  }
  return foundmovie;
}


void Movie::removeMovie(string movie_name)
{

  for(int i = 0; i < movieCatalogue.size(); i++)
  {
    if(movieCatalogue[i].movie_name == movie_name)
    {
    	movieCatalogue.erase(movieCatalogue.begin() + i);
    }
  }

}

void Movie::IncrementWatchedTimes(string movie_name,int watched_times)
{
  for(int i = 0; i < movieCatalogue.size(); i++)
  {
    if(movieCatalogue[i].movie_name == movie_name)
    {
     	movieCatalogue[i].watched_times += watched_times;
    }
  }
}


