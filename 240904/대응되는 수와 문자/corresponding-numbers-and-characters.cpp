#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
using namespace std;

// 변수 선언
int n, m;
string s;
unordered_map <string, int> map;
unordered_map <int, string> reverseMap;

int main() {
    cin >> n >> m;
    
    for (int i=1; i<=n; i++){
        cin >> s;
        map[s] = i;
        reverseMap[i] = s;
    }
    
    for (int i=0; i<m; i++){
        string x = "";
        cin >> x;
        if (isdigit(x[0])) {
            int idx = stoi(x);
            cout << reverseMap[idx] << endl;
        }
        else {
            cout << map[x] << endl;
        }
    }
    return 0;
}