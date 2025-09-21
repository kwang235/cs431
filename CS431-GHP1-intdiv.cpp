/*
    Program to process integer division with remainders using user inputted values 
    stored in global integer variables, and display the results alongside original
    values to the user

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    September 2025
*/

#include <iostream>
using namespace std;

void intdiv(void);
int N,D,Q,R;

int main(void){
    cout<<"Input 2 integers N, D to perform division with a space in between"<<endl;
    cin>>N>>D;
    intdiv();
    cout<<"N is "<<N<<endl<<"D is "<<D<<endl<<"Q is "<<Q<<endl<<"R is "<<R<<endl;
    return 0;
}

/*
    Function to grab global variable values for dividend and divisor
    (without modifying original values) to process integer division with,
    storing quotient and remainder back into different global variables

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    September 2025
*/
void intdiv(void){
    Q = 0;
    R = N;
    while (R>=D){
        R = R - D;
        Q = Q + 1;
    }
    return;
}