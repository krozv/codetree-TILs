#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    for (int i=0; word[i] != '\0'; i++){
        cout << word[i] << endl;
    }
    return 0;
}