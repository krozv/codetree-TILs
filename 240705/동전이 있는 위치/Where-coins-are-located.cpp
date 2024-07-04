#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[10][10];
    
    // 동전 위치 표시
    for (int k=0; k<m; k++){
        int c1, c2;
        cin >> c1 >> c2;
        arr[c1][c2] = 1;
    }

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (arr[i][j] == 1){
                cout << 1 << ' ';
            }
            else {
                cout << 0 << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}