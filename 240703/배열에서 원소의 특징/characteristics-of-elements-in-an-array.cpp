#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i=0; i<10; i++){
        cin >> arr[i];
    }
    int temp;
    for (int i=0; i<10; i++){
        if (arr[i] % 3 == 0){
            break;
        }
        temp = arr[i];
    }
    cout << temp;
    return 0;
}