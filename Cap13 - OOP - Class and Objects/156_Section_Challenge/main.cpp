//
// Created by Pedro Pereira on 23/09/2025.
//

#include "Movie.h"


int main()
{
    string temp_movie_name;
    string temp_movie_rating;
    string show_movie_movieCatalogue; //Review the difference between string and char in C++
    string remove_movie;
    string temp_movie_name_to_exlude;
    string temp_movie_name_to_edit;
    string increase_movie_watched_times;
    int temp_movie_watched_times;
    int iteraction_Controler;


    Movie movieList;
    do {
        cout << "-------------------------------------" << endl;
        cout << "Enter the movie informations" << endl;
        cout << "-------------------------------------" << endl;

        cout << "[1] - Enter the movie name: ";
        getline(cin,temp_movie_name);
        cout << endl;



        //Check if the movie name is in to movie catalog
        if (movieList.isInMoviesCollection(temp_movie_name))
        {
            cout << "The movie " << temp_movie_name << " is already in the movie catalogue:" << endl;
            cout << "[1] - Enter the movie name: ";
            getline(cin,temp_movie_name);
            cout << endl;
            if (!movieList.isInMoviesCollection(temp_movie_name))
            {

            }else
            {
                cout << "Unfortunately was not possible to add the " << temp_movie_name << " in to the movie catalogue" << endl;
                break;
            }
        }

        cout << "[2] - Enter the movie rating: ";
        getline(cin,temp_movie_rating);
        cout << endl;

        cout << "[3] - Enter the movie watched times: ";
        cin >> temp_movie_watched_times;
        cout << endl;

        movieList.addMovie(temp_movie_name, temp_movie_rating, temp_movie_watched_times);

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "[4] - Do you want to remove any movie? [Y]/[N]:";
        getline(cin,remove_movie);
        if(remove_movie == "Y" || remove_movie == "y" ||remove_movie == "YES")
        {
            cout << "[4.1] - Enter the movie to exclude: ";
            getline(cin,temp_movie_name_to_exlude);
            cout << endl;
            movieList.removeMovie(temp_movie_name_to_exlude);


        }else if (remove_movie == "N" || remove_movie == "n" ||remove_movie == "NO") {
            //do nothing
        }else {
            cout << "Please enter a valid option!" << endl;
        }
        cout << endl;


        cout << "[5] - Do you want to show the list movies? [Y]/[N]:";
        cin >> show_movie_movieCatalogue;
        cout << endl;

        if(show_movie_movieCatalogue == "Y" || show_movie_movieCatalogue == "y" ||show_movie_movieCatalogue == "YES")
        {
            movieList.displayAllMovies();

        }else if (show_movie_movieCatalogue == "N" || show_movie_movieCatalogue == "n" ||show_movie_movieCatalogue == "NO") {
            //do nothing
        }else {
            cout << "Please enter a valid option!" << endl;
        }

        cout << "[6] - Do you want to increase the any whateched time movie? [Y]/[N]:";
        cin >> increase_movie_watched_times;
        cout << endl;

        if(increase_movie_watched_times == "Y" || increase_movie_watched_times == "y" ||increase_movie_watched_times == "YES")
        {

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "[6.1] - Enter the movie to edit: ";
            getline(cin,temp_movie_name_to_edit);

            if (movieList.isInMoviesCollection(temp_movie_name_to_edit)) {

                //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "[6.2] - How much do you want to increase: ";
                cin >> temp_movie_watched_times;
                cout << endl;
                movieList.IncrementWatchedTimes(temp_movie_name_to_edit,temp_movie_watched_times);
            }
            else {
                cout << "Please enter a valid option!" << endl;
            }

        }else if (increase_movie_watched_times == "N" || increase_movie_watched_times == "n" ||increase_movie_watched_times == "NO") {
            //do nothing
        }else {
            cout << "Please enter a valid option!" << endl;
        }

        cout << "[7] - To exit insert [0] to continuos insert [1]:";
        cin >> iteraction_Controler; //add a functions that will manage if the user doesn't insert any information it'll go to net interation
        cout << endl;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }while (iteraction_Controler != 0);
    return 0;
}