//
// Created by 一杯刘 on 2019/12/15.
//
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void calculate(set<int> &s, int num) {
    if (num == 1) {
        return;
    }
    if (num % 2 == 0) {
        num = num / 2;
        s.insert(num);
    } else {
        num = (3 * num + 1) / 2;
        s.insert(num);
    }
    calculate(s, num);
}

int main() {
    int num;
    cin >> num;
    vector<int> v;
    set<int> s;
    int currentNum;
    for (int i = 0; i < num; i++) {
        cin >> currentNum;
        v.push_back(currentNum);
        calculate(s, currentNum);
    }
    vector<int> result;
    for (auto &i : v) {
        if (s.find(i) == s.end()) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    for (int i = result.size() - 1; i >= 0; i--) {
        if (i == 0) {
            cout << result[i];
        } else {
            cout << result[i] << " ";
        }
    }
}

