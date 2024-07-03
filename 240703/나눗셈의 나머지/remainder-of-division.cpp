#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arr[10] = {};
    while (a > 1){
        int rest = a % b;
        arr[rest]++;
        a /= b;
    }
    int sum_val = 0;
    for (int i=0; i<b; i++){
        sum_val += arr[i] * arr[i];
    }
    cout << sum_val;
    return 0;
}