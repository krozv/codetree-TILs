#include <iostream>
using namespace std;

// 소수판단함수
bool isPrime(int n) {
    for (int i=2; i<n; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    if (a > 1){
        for (int i=a; i<=b; i++){
            if (isPrime(i))
                sum += i;
        }
    }
    cout << sum;
    return 0;
}