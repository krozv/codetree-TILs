#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int val = 0;
    int cnt = 0;
    for (int i=0; i<n; i++){
        string str;
        cin >> str;
        val += str.length();
        if (str[0] == 'a'){
            cnt++;
        }
    }
    cout << val << ' ' << cnt;
    return 0;
}