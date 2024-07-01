#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int prod = 1;
    for (a; a<=b; a++){
        prod *= a;
    }
    cout << prod;
    return 0;
}