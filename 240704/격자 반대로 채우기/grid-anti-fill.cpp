#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10][10];
    int val=1;
    for (int j=n-1; j>=0; j--){
        if ((n-j) % 2 != 0){
            // 위로 올라감
            for (int i=n-1; i>=0; i--){
                arr[i][j] = val;
                val++;
            }
        }
        else {
            // 아래로 내려감
            for (int i=0; i<n; i++){
                arr[i][j] = val;
                val++;
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}