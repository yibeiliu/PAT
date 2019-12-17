//
// Created by peiyi.liu on 12/16/2019.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num;
    vector<vector<int>> v(5);
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num % 5].push_back(num);
    }

    int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
    double a4 = 0.0;

    vector<bool> result(5, false);
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0 && v[0][j] % 2 == 0) {
                a1 += v[0][j];
                result[0] = true;
            }

            if (i == 1) {
                if (j % 2 == 0) {
                    a2 += v[i][j];
                } else {
                    a2 -= v[i][j];
                }
                result[1] = true;
            }

            if (i == 2) {
                a3++;
                result[2] = true;
            }

            if (i == 3) {
                a4 += v[i][j];
                result[3] = true;
            }

            if (i == 4) {
                if (a5 < v[i][j]) {
                    a5 = v[i][j];
                    result[4] = true;
                }
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if(i != 0){
            cout << " ";
        }
        if (!result[i]) {
            cout << "N";
            continue;
        }

        if(i == 0) cout << a1;
        if(i == 1) cout << a2;
        if(i == 2) cout << a3;
        if(i == 3) printf("%.1f", a4 / v[3].size());
        if(i == 4) cout << a5;
    }
}

