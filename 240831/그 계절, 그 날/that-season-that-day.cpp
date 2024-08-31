#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isLeepYear(int y) {
    if (y % 100 == 0 && y % 400 != 0)
        return false;
    return true;
}
bool isExist(int y, int m, int d){
    // 31: 1 3 5 7 8 10 12
    vector<int> values = {2, 4, 6, 9, 11};
    if (find(values.begin(), values.end(), m) != values.end()){
        if (isLeepYear(y) && m == 2 && d > 29){
            return false;
        }
        if (m == 2 && d > 29)
            return false;
        if (d > 30)
            return false;
    }
    return true;
}
int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if (isExist(y, m, d)){
        vector<int> spring = {3, 4, 5};
        vector<int> summer = {6, 7, 8};
        vector<int> fall = {9, 10, 11};
        if (find(spring.begin(), spring.end(), m) != spring.end())
            cout << "Spring";
        if (find(summer.begin(), summer.end(), m) != summer.end())
            cout << "Summer";
        if (find(fall.begin(), fall.end(), m) != fall.end())
            cout << "Fall";
        else
            cout << "Winter";
    } 
    else
        cout << -1;
    return 0;
}