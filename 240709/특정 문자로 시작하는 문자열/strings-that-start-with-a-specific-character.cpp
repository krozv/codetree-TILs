#include <iostream>
using namespace std;
#include <string>
int main() {
    int n;
    cin >> n;

    string arr[20];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    char x;
    cin >> x;

    int cnt = 0;
    int sum_val = 0;

    for (int i=0; i<n; i++){
        if (arr[i][0] == x){
            sum_val += arr[i].length();
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << cnt << ' ' << double(sum_val)/cnt;
    return 0;
}