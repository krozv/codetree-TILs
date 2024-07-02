#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int satisfied = true;
    for (a; a<=b; a++){
        if (a % c == 0){
            satisfied = false;
            break;
        }
    }
    if (satisfied)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}