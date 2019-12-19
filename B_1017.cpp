//
// Created by peiyi.liu on 12/19/2019.
//

#include <iostream>

using namespace std;

int main() {
    string A;
    int B;
    cin >> A >> B;
    int R = 0;

    int temp = 0;
    for (int i = 0; i < A.length(); i++) {
        temp = temp * 10 + (A[i] - '0');
        if (temp == 0) {
            cout << "0";
            continue;
        }
        if (temp >= B) {
            cout << temp / B;
            R = temp % B;
            temp = R;
            continue;
        }
        if (i != 0) {
            cout << "0";
        } else if (i == A.length() - 1) {
            cout << "0";
            R = A[i] - '0';
        }
    }
    cout << " " << R;
}