/*
*/

#include <iostream>
#include <vector>
using namespace std;

void create_square(vector<char>);

int main(void){
    int k,temp;
    vector<char> chars = {};

    cout<<"Please enter a size for the square "<<endl;
    cin>>k;
    cout<<"Enter a character to create the square with "<<endl;
    for(int i = 0; i < k; i++){
        cout<<"Character "<<i;
        cin>>temp;
        chars.push_back(temp);
    }

    // create_square(chars);

    return 0;
}

void create_square(vector<char> chars) {
    
    return;
}