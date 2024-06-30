#include <iostream>
using namespace std;
int main() {
    char c;
    int n;
    cin >> c >> n;
    if (c == 'A'){
        for (int i=1; i<=n; i++){
            cout << i << ' ';
        }
    } else {
        for (int i=0; i<n; i++){
            cout << n-i << ' ';
        }
    }
    return 0;
}