#include <iostream>
using namespace std;

int main() {

    for (int i=0; i<4; i++){
        int sum_val = 0;
        for (int j=0; j<4; j++){
            int num;
            cin >> num;
            sum_val += num;
        }
        cout << sum_val << endl;
    }

    return 0;
}