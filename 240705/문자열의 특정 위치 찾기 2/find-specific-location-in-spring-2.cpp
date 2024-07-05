#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char x;
    cin >> x;
    int cnt = 0;
    for (int i=0; i<5; i++){
        if (arr[i][3] == x || arr[i][2] == x){
            cout << arr[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}