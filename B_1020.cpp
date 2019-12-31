//
// Created by peiyi.liu on 12/30/2019.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<float> v1, vector<float> v2) {
    return v1[1] / v1[0] > v2[1] / v2[0];
}

int main() {
    int N;
    int total;
    cin >> N >> total;
    vector<vector<float>> v(N);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            float temp;
            cin >> temp;
            v[j].push_back(temp);
        }
    }
    sort(v.begin(), v.end(), cmp);
    float prize = 0.0;
    for (int i = 0; i < v.size(); i++) {
        if (total <= 0) {
            break;
        }
        if (total >= v[i][0]) {
            prize = prize + v[i][1];
        } else {
            prize = prize + (v[i][1] / v[i][0]) * total;
        }
        total = total - v[i][0];
    }
    printf("%.2f", prize);
    return 0;
}
