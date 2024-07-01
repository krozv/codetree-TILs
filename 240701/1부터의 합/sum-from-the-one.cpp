#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum_val=0;
    for (int i=1; i<=100; i++){
        sum_val += i;
        if (sum_val >= n){
            cout << i;
            break;
        }
    }
    return 0;
}