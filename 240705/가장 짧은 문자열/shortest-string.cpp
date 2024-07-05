#include <iostream>
#include <string>
using namespace std;

int main() {
    int min_val, max_val;
    min_val = 20;
    max_val = 0;
    for (int i=0; i<3; i++){
        string str;
        cin >> str;
        int val;
        val = str.length();

        if (min_val > val){
            min_val = val;
        }
        if (max_val < val){
            max_val = val;
        }
    }
    cout << max_val - min_val;
    return 0;
}