#include <iostream>
#define MAX 100
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int checked[2 * MAX + 1][2 * MAX + 1];
    for(int i = 0; i < n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += MAX;
        y1 += MAX;
        x2 += MAX;
        y2 += MAX;

        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                checked[i][j] = 1;
            }
        }

    }
    // 넓이 계산
    int cnt = 0;
    for(int i = 0; i < 2 * MAX + 1; i++){
        for(int j = 0; j < 2 * MAX + 1; j++){
            if(checked[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}