#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int sum_val = 0;
    for (a; a <= b; a++){
        sum_val += a;
    }
    cout << sum_val;
    return 0;
}