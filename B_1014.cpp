//
// Created by 一杯刘 on 2019/12/16.
//
#include <iostream>
#include <set>
#include <cctype>
#include <map>

using namespace std;

int main() {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    map<char, string> m;
    m['A'] = "MON";
    m['B'] = "TUE";
    m['C'] = "WED";
    m['D'] = "THU";
    m['E'] = "FRI";
    m['F'] = "SAT";
    m['G'] = "SUN";

    int minABSize = a.size();
    if (a.size() > b.size()) {
        minABSize = b.size();
    }
    int temp = 0;
    for (int i = 0; i < minABSize; i++) {
        if (a[i] == b[i] && isupper(a[i]) && a[i] >= 'A' && a[i] <= 'G') {
            cout << m[a[i]];
            temp = i + 1;
            cout << " ";
            break;
        }
    }

    for (int i = temp; i < minABSize; i++) {
        if (a[i] == b[i] && (isdigit(a[i]) || (a[i] >= 'A' && a[i] <= 'N'))) {
            int day;
            if (isdigit(a[i])) {
                day = a[i] - '0';
            } else {
                day = a[i] - 'A' + 10;
            }
            printf("%02d:", day);
            break;
        }
    }

    int minCDSize = c.size();
    if (c.size() > d.size()) {
        minCDSize = d.size();
    }
    for (int i = 0; i < minCDSize; i++) {
        if (c[i] == d[i] && isalpha(c[i])) {
            if (i < 10) {
                cout << "0" << i;
            } else {
                cout << i;
            }
            break;
        }
    }
}
