#include <iostream>
using namespace std;

void calc(int a, int b) {
    int sm = min(a, b);
    int lg = max(a, b);
    for (int i=1; i<=lg; i++){
        if ((sm * i) % lg == 0){
            cout << sm * i;
            return;
        }
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    calc(a, b);
    return 0;
}