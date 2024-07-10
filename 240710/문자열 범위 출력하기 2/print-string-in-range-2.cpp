#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int len;
    len = word.length();
    int cnt;
    cin >> cnt;
    for (int i=len-1; i>=0; i--){
        if (!cnt)
            break;
        cout << word[i];
        cnt--;
    }
    return 0;
}