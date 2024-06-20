#include <iostream>
using namespace std;
int main() {
    char a, b, c;
    int ta, tb, tc;
    cin >> a >> ta >> b >> tb >> c >> tc;
    int cnt;
    if (a == 'Y' && ta >= 37){
        cnt += 1;
    }
    if (b == 'Y' && tb >= 37){
        cnt += 1;
    }
    if (c == 'Y' && tc >= 37){
        cnt += 1;
    }
    if (cnt >= 2){
        cout << 'E';
    }
    else {
        cout << 'N';
    }
    return 0;
}