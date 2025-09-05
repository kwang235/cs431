#include <iostream>
using namespace std;

void intdiv(void);
int N,D,Q,R;

int main(void){
    cout<<"Input N, D"<<endl;
    cin>>N>>D;
    intdiv();
    cout<<"N is "<<N<<endl<<"D is "<<D<<endl<<"Q is "<<Q<<endl<<"R is "<<R<<endl;
    return 0;
}

void intdiv(void){
    Q = 0;
    R = N;
    while (R>=D){
        R = R - D;
        Q = Q + 1;
    }
    return;
}