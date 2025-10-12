/*
    Program to sort an array of user defined integer values using global variables
    from smallest to largest using the flowchart outlined in GHP2, then display
    the sorted array to the user

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    October 2025
*/

#include <iostream>

using namespace std;
int n,j,k;
int a[50];

void sort(void);
void move(void);
void FindKay(int temp);

int main(void){
    cout<<"How many values would you like to sort?"<<endl;
    cin>>n;
    cout<<"input "<<n<<" values to place in the array"<<endl;
    for(int i = 1; i <= n; i++)
    {
        cout<<"value "<< i <<endl;
        cin>>a[i];
    }
    sort();

    for(int i = 1; i <= n; i++){
        cout<<"value "<< i <<" is "<<a[i]<<endl;
    }
    return 0;
}

/*
    Function to check if the next array position's value is greater than the 
    current, then perform the move() function if true

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    Octuber 2025
*/

void sort(void){
    for(j = 1; j<= n-1;j++)
    {
        if(a[j] > a[j+1]){
            move();
        }
    }
    return;
}

/*
    Function to set next array position value in an array equal to 
    current value of array index j, then call FindKay() with the original value of the
    next array position and move it back until it's larger than the value before it


    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    OCtober 2025
*/
void move(void){
    int temp = a[j+1];
    a[j+1] = a[j];
    FindKay(temp);
    a[k] = temp;
    return;
}

/*
    Function to check if the previous array position's value is larger than temp, then 
    set current position value equal to previous value in order to move temp back a 
    position

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    October 2025
*/
void FindKay(int temp){
    k = j;
    int sw = 0;
    while(k>1 && sw == 0)
    {
        if(a[k-1] > temp) {
            a[k] = a[k-1];
            k = k-1;
        }
        else{
            sw = 1;
        }
    }
    return;
}