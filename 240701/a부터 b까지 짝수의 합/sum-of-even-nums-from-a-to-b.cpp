#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int sum_val = 0;
    if (a % 2 != 0){
        a += 1;
    }
    for (a; a <=b; a+=2){
        sum_val += a;
    }
    cout << sum_val;
    return 0;
}