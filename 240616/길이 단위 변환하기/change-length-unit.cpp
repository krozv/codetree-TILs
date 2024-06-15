#include <iostream>
using namespace std;

int main() {
    double ft_to_cm = 30.48;
    double mi_to_cm = 160934;
    cout << fixed;
    cout.precision(1);

    double a = 9.2, b = 1.3;

    cout << a << "ft = " << a * ft_to_cm << "cm" << endl;
    cout << b << "mi = " << b * mi_to_cm << "cm" << endl;

    return 0;
}