#include <iostream>
using namespace std;

bool evenAndFive(int n){
    // 짝수임
    if (n % 2 == 0){
        // 숫자의 합이 5의 배수임
        if (((n%10) + (n/10)) % 5 == 0){
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    if (evenAndFive(n)){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}