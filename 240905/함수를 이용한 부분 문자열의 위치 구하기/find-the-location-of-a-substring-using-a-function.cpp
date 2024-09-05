#include <iostream>
#include <string>
#define MAX_N 1000

using namespace std;

// 초기화
string s;
string input;

int findStringIndex() {
    int len = s.size();
    int input_len = input.size();
    for (int i=0; i<(len-input_len+1); i++){
        int flag;
        for (int j=0; j<input_len; j++){
            if (s[i+j] != input[j]){
                break;
            }
            flag = j;
        }
        if (flag == input_len - 1){
            cout << i;
            return i; 
        }
    }
}

int main() {
    cin >> s >> input;
    findStringIndex();
    return 0;
}