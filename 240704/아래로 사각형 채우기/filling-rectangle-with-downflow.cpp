#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int val=1;
    int arr[10][10];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arr[j][i] = val;
            val++;
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