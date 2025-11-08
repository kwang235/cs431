/*
    Class to create and display a concentric square of characters
    using character vectors

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    OCtober 2025
*/
#include <iostream>
#include <vector>
using namespace std;

class rsquare{
    public:
    vector<char> characters;
    vector<vector<char>> display;
    int lower, upper;

    /*
        Constructor taking a character vector input to use in the display vector
        alongside an int k to determine display vector size along with upper and
        lower bounds

        Written by Kevin W.
        Language: C++ 
        Compiler: MinGW G++
        November 2025
    */
    rsquare(vector<char> x, int k){
        characters = x;
        display.resize(k * 2, vector<char>(k * 2, '0'));
        lower = 1;
        upper = k * 2;
    }

    /*
        Method to print out the contents of the display vector
        after it has been populated

        Written by Kevin W.
        Language: C++ 
        Compiler: MinGW G++
        November 2025
    */
    void print(void){
        for(int row = 1; row < display.size(); row++){
            cout<<endl;
            for(int col = 1; col < display[row].size(); col++) {
                cout<<display[row][col];
            }
        }
        return;
    }

    /*
        Method to recursively create a concentric square by filling a 2d vector
        of characters from a character vector, stepping back by 1 row and column each loop
        until the input character vector is empty

        Written by Kevin W.
        Language: C++ 
        Compiler: MinGW G++
        November 2025
    */
    void createSquare(int lower, int upper){
        int len = characters.size();
        if (!characters.empty()){
            for (int row = lower; row < upper;row++){
                for(int col = lower; col < upper; col++) {
                    display[row][col] = characters.back();
                }
            }
            characters.pop_back();
            createSquare(lower + 1, upper - 1);
        }
        else {return;}
        return;
    }
};