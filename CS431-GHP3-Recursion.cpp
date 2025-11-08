/*
*/

#include <iostream>
#include <vector>
#include <rsquare.h>
using namespace std;

int main(void){
    int k,temp;
    vector<char> characters = {};

    cout<<"Please enter a size for the square "<<endl;
    cin>>k;
    cout<<"Enter a character to create the square with "<<endl;
    for(int i = 0; i < k; i++){
        cout<<"Character "<<i;
        cin>>temp;
        characters.push_back(temp);
    }

    rsquare square(characters, k);
    square.createSquare(square.lower,square.upper);
    square.print();

    return 0;
}
