#include <iostream>
using namespace std;

bool includeNumber(int n) {
    while (n > 0){
        if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9){
            return true;
        }
        n /= 10;
    }
    return false;
}

bool three(int n) {
    return n % 3 == 0;
}
int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i=a; i<=b; i++){
        bool result;
       if (includeNumber(i) || three(i)){
        cnt++;
       }
    }
    cout << cnt;
    return 0;
}