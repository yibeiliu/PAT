//
// Created by peiyi.liu on 12/19/2019.
//

#include <iostream>

using namespace std;

//int main() {
//    long A, B;
//    int da, db;
//
//    cin >> A >> da >> B >> db;
//
//    int arr1[10] = {0};
//
//    while (A != 0 || A / 10 != 0) {
//        arr1[A % 10]++;
//        A = A / 10;
//    }
//
//    int arr2[10] = {0};
//
//    while (B != 0 || B / 10 != 0) {
//        arr2[B % 10]++;
//        B = B / 10;
//    }
//
//    int sum1 = 0, sum2 = 0;
//    for (int i = 0; i < arr1[da]; i++) {
//        sum1 = sum1 * 10 + da;
//    }
//
//    for (int i = 0; i < arr2[db]; i++) {
//        sum2 = sum2 * 10 + db;
//    }
//
//    cout << sum1 + sum2;
//}

int main() {
    string A, B;
    int da, db;
    int pa = 0, pb = 0;
    cin >> A >> da >> B >> db;
    for (char c : A) {
        if (c - '0' == da) {
            pa = pa * 10 + da;
        }
    }

    for (char c : B) {
        if (c - '0' == db) {
            pb = pb * 10 + db;
        }
    }
    cout << pa + pb;
}

