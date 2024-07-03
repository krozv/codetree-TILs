#include <iostream>
using namespace std;
int main() {
    int arr[5];
    for (int i=0; i<10; i++){
        cin >> arr[i];
    }
    int sum_val = 0;
    int cnt = 0;
    for (int i=0; i<10; i++){
        if (arr[i] >= 250){
            break;
        }
        sum_val += arr[i];
        cnt++;
    }
    cout << sum_val << ' ';
    cout << fixed;
    cout.precision(1);
    cout << double(sum_val)/cnt;
    return 0;
}