#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    char reversedWord[100]={};
    for (int i=0; i<word.length(); i++){
        if (i%2 == 1){
            reversedWord[i/2] = word[i];
        }
    }
    for (int i=101; i>=0; i--){
        if (reversedWord[i]){
            cout << reversedWord[i];
        }
    }
    return 0;
}