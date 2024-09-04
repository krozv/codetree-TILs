#include <iostream>
#include <unordered_map>
#include <string>

#define MAX_N 100000

using namespace std;

unordered_map <string, int> string_to_index;

int main() {
    int n;
    cin >> n;
    int max = 0;
    for (int i; i<n; i++){
        string s;
        cin >> s;
        string_to_index[s]++;
        if (max < string_to_index[s])
            max = string_to_index[s];
    }
    cout << max;
    return 0;
}