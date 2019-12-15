//
// Created by 一杯刘 on 2019/12/15.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Student {
    string name;
    string id;
    int score;
};

bool cmp(Student a, Student b) {
    return a.score > b.score;
}

int main() {
    int num;
    cin >> num;
    vector<Student> v;
    for (int i = 0; i < num; i++) {
        Student stu;
        cin >> stu.name;
        cin >> stu.id;
        cin >> stu.score;
        v.push_back(stu);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].name << " " << v[0].id << endl;
    cout << v.back().name << " " << v.back().id << endl;
    return 0;
}
