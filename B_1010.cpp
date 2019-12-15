//
// Created by 一杯刘 on 2019/12/15.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    bool isFirst = true;
    while (cin >> a >> b) {
        if (b != 0) {
            if (!isFirst) {
                cout << " ";
            }
            cout << a * b << " " << b - 1;
            isFirst = false;
        }
    }
    if (isFirst) {
        cout << "0 0";
    }
}
