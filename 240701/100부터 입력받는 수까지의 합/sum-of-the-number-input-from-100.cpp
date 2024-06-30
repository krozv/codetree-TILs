#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum_val = 0;
    for (n; n<=100; n++){
        sum_val += n;
    }
    cout << sum_val;
    return 0;
}