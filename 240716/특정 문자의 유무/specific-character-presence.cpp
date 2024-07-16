#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string a = "ee";
    string b = "ab";
    
    int n = s.length();
    bool exist = false;
    // ee부터 비교
    for(int i=0; i<n-1; i++){
        int len = a.length();
        
        for(int j=0; j<len; j++){
            if (s[i+j] != a[j])
                break;
            if(j == len-1){
                exist = true;
            }
        }
    }
    if (exist)
        cout << "Yes" << ' ';
    else
        cout << "No" << ' ';

    bool existed = false;
    // ee부터 비교
    for(int i=0; i<n-1; i++){
        int len = b.length();
        
        for(int j=0; j<len; j++){
            if (s[i+j] != b[j])
                break;
            if(j == len-1){
                existed = true;
            }
        }
    }
    if (existed)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}