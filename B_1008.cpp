//
// Created by 一杯刘 on 2019/12/15.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (i + m < n) {
            v[i + m] = num;
        } else {
            v[(i + m) % n] = num;
        }
    }
    for (int i = 0; i < v.size(); i++) {
        if (i == 0) {
            cout << v[i];
        } else {
            cout << " " << v[i];
        }
    }
}
