#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[10];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int min_val = INT_MAX;
    for (int i=0; i<n-1; i++){
        if ((arr[i+1]-arr[i]) < min_val){
            min_val = arr[i+1]-arr[i];
        }
    }
    cout << min_val;
    return 0;
}