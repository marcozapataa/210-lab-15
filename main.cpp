#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// Create Movie class
class Movie {
    private:
        string screenWriter;
        int yearReleased;
        string movieTitle;
    
    public:
        //setters
        void set_screenWriter(string w)  { screenWriter = w; }
        void set_yearReleased(int y)  { yearReleased = y; }
        void set_movieTitle(string m)  { movieTitle = m; }

        //getters
        string get_screenWriter()  { return screenWriter; }
        int get_yearReleased()  { return yearReleased; }
        string get_movieTitle()  { return movieTitle; }

        //print method
        void print() {
            cout << "Movie: " << movieTitle << endl;
            cout << "Year Released: " << yearReleased << endl;
            cout << "Screenwriter: " << screenWriter << endl;
        }
};


int main() {
    //open file
    ifstream fin;
    fin.open("movie-info.txt");

    //check if file opened properly
    if(!fin.is_open()) {
        cout << "Error! Could not open file" << endl;
        return 1;
    }

    //declare vector container
    vector<Movie> movieContainer;

    //temp variables to store data
    string title;
    int year;
    string writer;

    //read data from file loop
    while(getline(fin, title)) {
        fin >> year;
        fin.ignore;
        getline(fin, writer);

        //create temp Movie object
        Movie tempMovie;
        tempMovie.set_movieTitle(title);
        tempMovie.set_yearReleased(year);
        tempMovie.set_screenWriter(writer);

        //append object to vector
        movieContainer.push_back(tempMovie);
    }
    fin.close();

    return 0;
}