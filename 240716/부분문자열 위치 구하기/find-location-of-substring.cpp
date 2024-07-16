#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, obj;
    cin >> str >> obj;
    int idx = -1;
    if (str.find(obj) != string::npos)
        idx = str.find(obj);
    cout << idx;
    return 0;
}