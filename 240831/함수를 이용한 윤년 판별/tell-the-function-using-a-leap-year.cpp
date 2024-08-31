#include <iostream>
using namespace std;
// 윤년 판단 함수
bool isLeepYear(int n) {
    if (n % 100 == 0 && n % 400 != 0)
        return false;
    if (n % 4 == 0)
        return true;
    else 
        return false;
}
int main() {
    int y;
    cin >> y;
    if (isLeepYear(y))
        cout << "true";
    else
        cout << "false";
    return 0;
}