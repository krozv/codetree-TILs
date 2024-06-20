#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b){
        if (a >= c){
            // a
            cout << a;
        }
        else {
            // c
            cout << c;
        }
    }
    else {
        if (b >= c){
            // b
            cout << b;
        }
        else {
            // c
            cout << c;
        }
    }
    return 0;
}