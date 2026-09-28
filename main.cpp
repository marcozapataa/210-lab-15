#include <iostream>

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


    return 0;
}