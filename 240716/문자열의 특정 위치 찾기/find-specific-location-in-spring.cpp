#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, chr;
    cin >> str >> chr;
    int idx = -1;
    if (str.find(chr) != string::npos){
        idx = str.find(chr);
    }
    if (idx != -1){
        cout << idx;
    }
    else {
        cout << "No";
    }
    return 0;
}