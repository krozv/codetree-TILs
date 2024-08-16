#include <iostream>
using namespace std;

void PrintStar10() {
    for (int i=0; i<10; i++){
        cout << "*";
    }
    cout << endl;
}
int main() {
    for (int i=0; i<5; i++){
        PrintStar10();
    }
    return 0;
}