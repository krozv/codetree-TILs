#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    // 배열 뒤로 뒤집은 후 출력
    for (int i=n; i>0; i--){
        if (arr[i] % 2 == 0){
            cout << arr[i] << ' ';
        }
    } 
    return 0;
}