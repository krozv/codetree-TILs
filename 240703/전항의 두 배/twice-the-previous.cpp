#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cin >> arr[0];
    cin >> arr[1];
    for (int i=0; i<8; i++){
        arr[i+2] = 2 * arr[i] + arr[i+1];
    }
    for (int i=0; i<10; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}