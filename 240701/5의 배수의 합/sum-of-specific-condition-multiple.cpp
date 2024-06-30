#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int sum_val = 0;
    int l, s;

    if (a >= b){
        l = a;
        s = b;
    } else {
        l = b;
        s = a;
    }

    for (s; s<=l; s++){
        if (s % 5 == 0){
            sum_val += s;
        }
    }
    cout << sum_val;
    return 0;
}