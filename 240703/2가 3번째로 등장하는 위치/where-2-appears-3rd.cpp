#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int cnt=0;
    int j=0;
    while (cnt<3){
        if (arr[j] == 2){
            cnt++;
        }
        j++;
    }
    cout << j;
    return 0;
}