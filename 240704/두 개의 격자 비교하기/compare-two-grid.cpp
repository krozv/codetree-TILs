#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[10][10];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            int num;
            cin >> num;
            if (num == arr[i][j]){
                cout << 0 << ' ';
            }
            else {
                cout << 1 << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}