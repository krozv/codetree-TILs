#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[10][10] = {};
    for (int k=0; k<m; k++){
        int c1, c2;
        cin >> c1 >> c2;
        arr[c1][c2] = c1 * c2;
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}