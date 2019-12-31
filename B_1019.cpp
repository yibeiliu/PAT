//
// Created by peiyi.liu on 12/23/2019.
//

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(char a, char b) {
    return a > b;
}

int main() {
    string s;
    cin >> s;
    s.insert(0, 4 - s.length(), '0');
    do {
        string a = s, b = s;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), cmp);
        int num = stoi(b) - stoi(a);
        s = to_string(num);
        s.insert(0, 4 - s.length(), '0');
        cout << b << " - " << a << " = " << s << endl;
    } while (s != "0000" && s != "6174");
}