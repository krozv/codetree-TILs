#include <iostream>
using namespace std;

int main() {
    int three = 0;
    int five = 0;
    int i = 0;
    while (i < 10){
        int n;
        cin >> n;
        if (n % 3 == 0){
            three ++;
        }
        if (n % 5 == 0){
            five ++;
        }
        i++;
    }
    cout << three << " " << five;
    return 0;
}