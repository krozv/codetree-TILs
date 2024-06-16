#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string result;
    result = n == 100 ? "pass" : "failure";
    cout << result;
    return 0;
}