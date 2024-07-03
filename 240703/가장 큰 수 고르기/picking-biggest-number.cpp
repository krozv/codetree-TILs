#include <iostream>
#include <climits>
using namespace std;

int main() {
    int max_val = INT_MIN;
    for (int i=0; i<10; i++){
        int num;
        cin >> num;
        if (max_val < num){
            max_val = num;
        }
    }
    cout << max_val;
    return 0;
}