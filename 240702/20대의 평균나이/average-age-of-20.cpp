#include <iostream>
using namespace std;
int main() {
    int sum_val = 0, cnt = 0;
    while (true){
        int n;
        cin >> n;
        if (n >= 30 || n < 20){
            break;
        }
        sum_val += n;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);
    cout << double(sum_val)/cnt;
    return 0;
}