#include <iostream>
#include <string>
#define MAX_A 100

using namespace std;

// 변수 선언
string s;

bool isPalindrome(string s) {
    int len = s.length();
    for (int i=0; i<(len/2); i++){
        if (s[i] != s[len-i-1])
            return false;
    }
    return true;
}
int main() {
    cin >> s;
    if (isPalindrome(s)){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}