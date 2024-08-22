#include <iostream>
using namespace std;

int calc(int n){
    int sum = 0;
    for (int i=1; i<=n; i++){
        sum += i;
    }
    return sum / 10;
}

int main() {
    int n;
    cin >> n;
    int result;
    result = calc(n);
    cout << result;
    return 0;
}