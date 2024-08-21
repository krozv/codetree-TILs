#include <iostream>
using namespace std;

void calc(int a, int b){
    int n = min(a, b);
    for (int i=n; i>=1; i--){
        if (a % i == 0 && b % i == 0){
            cout << i;
            return;
        }

    }
}
int main() {
    int n, m;
    cin >> n >> m;
    calc(n, m);
    return 0;
}