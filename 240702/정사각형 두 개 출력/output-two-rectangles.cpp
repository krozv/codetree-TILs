#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int times=0; times<2; times++){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}