#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int val = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << val << ' ';
            val++;
        }
        cout << endl;
    }
    return 0;
}