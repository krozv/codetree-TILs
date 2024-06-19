#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    if (90 <= a && 95 <= b){
        cout << 100000;
    }
    else if (90 <= a && 90 <= b){
        cout << 50000;
    }
    else{
        cout << 0;
    }
    return 0;
}