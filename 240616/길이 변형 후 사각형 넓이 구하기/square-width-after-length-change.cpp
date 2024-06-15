#include <iostream>
using namespace std;
int main() {
    int length, width;
    cin >> length >> width;
    length += 8;
    width *= 3;
    cout << length << endl;
    cout << width << endl;
    cout << length * width;
    return 0;
}