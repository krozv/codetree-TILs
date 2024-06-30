#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int sum_val = 0, cnt = 0;
    for (a; a<=b; a++){
        if ((a % 5 == 0) || (a % 7 == 0)){
            sum_val += a;
            cnt += 1;
        }
    }
    cout << sum_val << ' ';
    cout << fixed;
    cout.precision(1);
    cout << double(sum_val)/cnt;
    return 0;
}