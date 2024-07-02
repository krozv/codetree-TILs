#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool satisfied = false;
    for (a; a<=b; a++){
        if (a % c == 0){
            satisfied = true;
            break;
        }
    }
    if (satisfied)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}