#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum_val = 0;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        if ((x % 2 != 0) && (x % 3 == 0)){
            sum_val += x;
        }
    }
    cout << sum_val;
    return 0;
}