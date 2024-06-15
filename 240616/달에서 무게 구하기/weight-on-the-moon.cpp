#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int w = 13;
    double rate = 0.165;

    cout.precision(6);
    cout << w << " * " << rate << " = " << w*rate;
    
    
    return 0;
}