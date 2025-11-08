#include <iostream>
#include <vector>
using namespace std;

class rsquare{
    public:
    vector<char> characters;
    vector<vector<char>> display;
    vector<char> vec;
    int length = characters.size();
    int lower, upper;

    rsquare(vector<char> x, int k){
        characters = x;
        display.resize(k * 2, vector<char>(k * 2, '0'));
        lower = 1;
        upper = k * 2;
    }
    void print(void) {
        for(int row = 1; row < display.size(); row++){
            cout<<endl;
            for(int col = 1; col < display[row].size(); col++) {
                cout<<display[row][col];
            }
        }

    }

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
        else return;

        return;
    }
};