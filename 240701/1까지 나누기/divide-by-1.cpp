#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int i=1;
    while (true){
        cnt++;
        if (double(n)/i <= 1){
            break;
        }
        n /= i;
        i++;
    }
    cout << cnt;
    return 0;
}