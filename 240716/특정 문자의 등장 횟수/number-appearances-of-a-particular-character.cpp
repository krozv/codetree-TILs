#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt_a = 0;
    int len_a = 2;
    string a = "ee";
    string b = "eb";

    for (int i=0; i<s.length()-1; i++){
        for (int j=0; j<len_a; j++){
            if (s[i+j] != a[j]){
                break;
            }
            if (j == len_a-1){
                cnt_a++;
            }
        }
    }
    int cnt_b = 0;
    int len_b = 2;
    
    for (int i=0; i<s.length()-1; i++){
        for (int j=0; j<len_b; j++){
            if (s[i+j] != b[j]){
                break;
            }
            if (j == len_b-1){
                cnt_b++;
            }
        }
    }
    cout << cnt_a << ' ' << cnt_b;

    return 0;
}