#include <iostream>
using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    int b;
    b = double(10000 * w) / (h * h);
    cout << b << endl;
    if (b >= 25){
        cout << "Obesity";
    }
    return 0;
}