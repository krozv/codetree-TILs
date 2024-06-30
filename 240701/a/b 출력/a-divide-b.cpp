#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << a/b << '.';
    a %= b;
    int i = 0;
    while (i < 20){
        a *= 10;
        cout << a/b;
        a %= b;
        i++;
    }
    
    return 0;
}