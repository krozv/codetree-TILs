#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    for (int i=1; i<=n; i++){
        if (i % 12 == 0){
            a += 1;
        } else if (i % 3 == 0){
            b += 1;
        } else if (i % 2 == 0){
            c += 1;
        }
    }
    cout << c << ' ' << b << ' ' << a;

    return 0;
}