//
// Created by peiyi.liu on 12/16/2019.
//

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> v;
    for (int i = 2; i < INT_MAX; i++) {
        if (isPrime(i)) {
            v.push_back(i);
            if (n <= v.size()) {
                break;
            }
        }
    }

    int j = 1;
    for (int i = m - 1; i < n - 1; i++) {
        cout << v[i];
        if (j % 10 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
        j++;
    }
    cout << v[n - 1];
}

