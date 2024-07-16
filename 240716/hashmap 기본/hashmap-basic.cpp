#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i=0; i<n; i++){
        string command;
        cin >> command;
        // add
        if (command == "add"){
            int k, v;
            cin >> k >> v;
            m[k] = v;
        }
        // remove
        else if (command == "remove"){
            int k;
            cin >> k;
            m.erase(k);
        }
        // find
        else {
            int k;
            cin >> k;
            if (m.find(k) != m.end()){
                // hashmap에 존재할 경우
                cout << m[k] << endl;
            }
            else {
                cout << "None" << endl;
            }
        }
    }
    return 0;
}