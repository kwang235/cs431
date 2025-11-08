/*
    Driver program to take user input of a sequence of characters along with a vector size
    to pass into an instance of rsquare in order to create and display a concenctric square
    of characters recursively

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    November 2025
*/

#include <iostream>
#include <vector>
#include "rsquare.h"
using namespace std;

int main(void){
    int k;
    char temp = ' ';
    vector<char> characters = {};

    cout<<"Please enter a size for the square "<<endl;
    cin>>k;
    cout<<"Enter a character to create the square with "<<endl;
    for(int i = 1; i <= k; i++){
        cout<<"Character "<<i<<endl;
        cin>>temp;
        characters.push_back(temp);
    }

    rsquare square(characters, k);
    square.createSquare(square.lower,square.upper);
    square.print();

    return 0;
}
