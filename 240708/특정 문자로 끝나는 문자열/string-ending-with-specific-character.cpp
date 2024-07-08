#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    for (int i=0; i<10; i++){
        cin >> arr[i];
    }
    char x;
    cin >> x;
    bool exist = false;
    for (int i=0; i<10; i++){
        int len = arr[i].length();
        if (arr[i][len-1] == x){
            cout << arr[i] << endl;
            exist = true;
        }
    }
    if (!exist){
        cout << "None";
    }
    return 0;
}