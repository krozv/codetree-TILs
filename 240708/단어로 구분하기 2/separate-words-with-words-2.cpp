#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i=0; i<10; i++){
        string word;
        cin >> word;
        if (i % 2 == 0){
            cout << word << endl;
        }
    }
    return 0;
}