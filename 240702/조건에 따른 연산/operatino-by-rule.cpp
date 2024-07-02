#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt=0;
    while (true){
        if (n >= 1000)
            break;
        if (n % 2 == 0){
            n *= 3;
            n++;
        }
        else {
            n *= 2;
            n += 2;
        }
        cnt++;

    }
    cout << cnt;
    return 0;
}