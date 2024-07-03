#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i=0; i<10; i++){
        cin >> arr[i];
    }
    int sum_val = 0;
    sum_val += arr[2];
    sum_val += arr[4];
    sum_val += arr[9];
    cout << sum_val;
    return 0;
}