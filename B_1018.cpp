//
// Created by peiyi.liu on 12/19/2019.
//

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int jiaScore[3] = {0};
    int yiScore[3] = {0};
    int jiaWin = 0, jiaLose = 0;
    char jia, yi;
    for (int i = 0; i < N; i++) {
        cin >> jia >> yi;
        if (jia == 'C' && yi == 'J') {
            jiaScore[1]++;
            jiaWin++;
        } else if (jia == 'C' && yi == 'B') {
            yiScore[0]++;
            jiaLose++;
        } else if (jia == 'B' && yi == 'J') {
            yiScore[2]++;
            jiaLose++;
        } else if (jia == 'B' && yi == 'C') {
            jiaScore[0]++;
            jiaWin++;
        } else if (jia == 'J' && yi == 'B') {
            jiaScore[2]++;
            jiaWin++;
        } else if (jia == 'J' && yi == 'C') {
            yiScore[1]++;
            jiaLose++;
        }
    }
    cout << jiaWin << " " << N - jiaWin - jiaLose << " " << jiaLose << endl;
    cout << jiaLose << " " << N - jiaWin - jiaLose << " " << jiaWin << endl;
    int jiaIndex = jiaScore[0] >= jiaScore[1] ? 0 : 1;
    jiaIndex = jiaScore[jiaIndex] >= jiaScore[2] ? jiaIndex : 2;
    int yiIndex = yiScore[0] >= yiScore[1] ? 0 : 1;
    yiIndex = yiScore[yiIndex] >= yiScore[2] ? yiIndex : 2;
    char arr[3] = {'B', 'C', 'J'};
    cout << arr[jiaIndex] << " " << arr[yiIndex];
}