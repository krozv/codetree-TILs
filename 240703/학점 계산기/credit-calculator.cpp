#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    double arr[5];
    double sum_val=0;
    for (int i=0; i<5; i++){
        cin >> arr[i];
        sum_val += arr[i];
    }
    double score;
    score = sum_val / n;
    cout << fixed;
    cout.precision(1);
    cout << score << endl;

    if (score >= 4.0){
        cout << "Perfect";
    }
    else if (score >= 3.0){
        cout << "Good";
    }
    else {
        cout << "Poor";
    }
    return 0;
}