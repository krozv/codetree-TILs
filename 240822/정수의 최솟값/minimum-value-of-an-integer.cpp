#include <iostream>
using namespace std;

int minVal(int a, int b, int c) {
    int middle = min(a, b);
    int result = min(middle, c);
    return result;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << minVal(a, b, c);
    return 0;
}