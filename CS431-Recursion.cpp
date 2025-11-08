#include <iostream>
using namespace std;

int bert(int x, int y);

int k = 0;

int main(void)
{
    int a = 3;
    int b = 2;
    int result = bert(a,b);
    cout<<k<<a<<b<<endl;

    return 0;
}

int bert (int x, int y){
    int ans,q,r,s;
    k++;
    cout<<k<<x<<y<<endl;
    if(x < 2 || x == y){
        ans = x*y + 3;
        cout<<"ans is "<<ans<<endl;
        return ans;
    }
    else{
        q = bert(x-1,y);
        r = bert(x-1,y-1);
        s = bert(x,x);
        ans = q*r+s;
        cout<<"ans is "<<ans<<endl;
        return ans;
    }
}