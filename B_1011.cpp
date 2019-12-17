//
// Created by peiyi.liu on 12/16/2019.
//

#include <iostream>

using namespace std;

int main() {
    cout << "LONG_MAX = " << LONG_MAX << endl;
    cout << "LONG_MIN = " << LONG_MIN << endl;
    cout << "LONG_LONG_MAX = " << LONG_LONG_MAX << endl;
    cout << "LONG_LONG_MIN = " << LONG_LONG_MIN << endl;
    cout << "INT_MAX = " << INT_MAX << endl;
    cout << "INT_MIN = " << INT_MIN << endl;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a + b > c) {
            cout << "Case #" << i + 1 << ": true" << endl;
        } else {
            cout << "Case #" << i + 1 << ": false" << endl;
        }
    }
}