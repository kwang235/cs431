/*
    Program to take input of a text file name to parse through in order to keep 2 maps of
    strings contained within. One starting with 'd' or 'D', and another for the remaining
    words, then display to the user each of the words in alphabetical order alongside the 
    number of times that it appears

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    November 2025
*/

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

void dictSearch(const string fileName);

int main(void)
{
    string fileName;

    cout<<"Please Enter the Name of word file: ";
    cin>>fileName;

    dictSearch(fileName);

    return 0;
}


/*
    Function to accept a text file name to analyze, then store each string within
    into 2 lists/maps alongside an integer for number of times it appears
    as a key-value pair, then display the lists alphabetically 

    Written by Kevin W.
    Language: C++ 
    Compiler: MinGW G++
    November 2025
*/
void dictSearch(const string fileName)
{
    ifstream fileIn;
    map<string, int> wordCounts;
    map<string, int> dWordCounts;
    string curWord;
    char fChar;
    int i;

    fileIn.open(fileName.data());
    assert(fileIn.is_open());

    while(fileIn>>curWord)
    {
        fChar = curWord.at(0);
        if(fChar == 'd' || fChar == 'D'){
            if(dWordCounts.count(curWord) == 0){
            dWordCounts[curWord] = 1;
            }
            else{
                dWordCounts[curWord]++;
            }
        }
        else{
            if(dWordCounts.count(curWord) == 0){
                wordCounts[curWord] = 1;
            }
            else{
                wordCounts[curWord]++;
            }
        }
    }

    cout<<"The words beginning in D are: "<<endl;
    i = 1;
    for(auto dword : dWordCounts) {
        cout<< "Word "<<i<<" is "<<dword.first<<" repeated "<< dword.second<<" times"<<endl;
        i++;
    }

    i = 1;
    cout<<"The remaining words are: "<<endl;
    for(auto word : wordCounts) {
        cout<< "Word "<<i<<" is "<<word.first<<" repeated "<< word.second<<" times"<<endl;
        i++;
    }

}
