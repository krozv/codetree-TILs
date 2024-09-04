#include <iostream>
#include <unordered_map>

#define MAX_N 100000

using namespace std;

int arr[MAX_N];
unordered_map<int, int> num_to_index;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        num_to_index[arr[i]]++;
    }
    for (int i=0; i<m; i++){
        int x;
        cin >> x;
        cout << num_to_index[x] << ' ';
    }
    return 0;
}