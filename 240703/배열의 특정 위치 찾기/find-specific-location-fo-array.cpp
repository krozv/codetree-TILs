#include <iostream>
using namespace std;
int main() {
    int arr[10];
    for (int i=0; i<10; i++){
        cin >> arr[i];
    }

    int sum_even = 0;
    int three = 0;
    int cnt = 0;

    for (int i=0; i<10; i++){
        if (i % 2 == 1){
            sum_even += arr[i];
        }
        if (i % 3 == 2){
            three += arr[i];
            cnt++;
        }
    }
    cout << sum_even << ' ';
    cout << fixed;
    cout.precision(1);
    cout << double(three)/cnt;
    return 0;
}