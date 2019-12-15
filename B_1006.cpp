//
// Created by 一杯刘 on 2019/12/15.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n / 100 != 0) {
        for (int i = 0; i < n / 100; i++) {
            cout << "B";
        }
    }
    n = n % 100;

    if (n / 10 != 0) {
        for (int i = 0; i < n / 10; i++) {
            cout << "S";
        }
    }
    
    n = n % 10;

    for (int i = 1; i <= n; i++) {
        cout << i;
    }
}



