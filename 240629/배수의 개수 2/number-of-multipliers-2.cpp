#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int i = 0;
    while (i < 10){
        int n;
        cin >> n;
        if (n % 2 != 0){
            cnt++;
        }
        i++;
    }
    cout << cnt;
    return 0;
}