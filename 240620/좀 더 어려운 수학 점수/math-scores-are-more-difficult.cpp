#include <iostream>
using namespace std;
int main() {
    int a1, a2;
    int b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    if (a1 != b1){
        // 수학 점수가 높은 경우
        if (a1 > b1){
            cout << 'A';
        }
        else {
            cout << 'B';
        }
    }
    else {
        if (a2 > b2){
            cout << 'A';
        }
        else {
            cout << 'B';
        }
    }
    return 0;
}