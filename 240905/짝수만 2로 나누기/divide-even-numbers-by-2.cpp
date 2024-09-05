#include <iostream>

#define MAX_N 50

using namespace std;

int arr[MAX_N];
int n;

void divide(int *x) {
    for (int i=0; i<n; i++) {
        if (x[i] % 2 == 0) {
            x[i] /= 2;
        }
    }
}
int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    divide(arr);
    
    for (int i=0; i<n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}