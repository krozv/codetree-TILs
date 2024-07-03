#include <iostream>
using namespace std;
int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    int idx = -1;
    char item;
    cin >> item;

    for (int i=0; i<6; i++){
        if (item == arr[i])
            idx = i;
            break;
    }
    if (idx == -1)
        cout << "None";
    else
        cout << idx;
    return 0;
}