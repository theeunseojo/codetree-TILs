#include <iostream>
#define OFFSET 100
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;

    // 좌측하단 꼭짓점 입력 
    int x1[2 * OFFSET + 1];
    int y1[2 * OFFSET + 1];
    
    for(int i = 0; i < n; i++){
        cin >> x1[i] >> y1[i];
        x1[i] += OFFSET;
        y1[i] += OFFSET;
    }

    //사각형 칠하기
    // x : x1[i] ~ x1[i] + 8 - 1
    // y : y1[i] ~ y1[i] + 8 - 1
    int checked[2 * OFFSET + 1][2 * OFFSET + 1];
    for(int i = 0; i < n; i++){
        for(int x = x1[i]; x < x1[i] + 8; x++){
            for(int y = y1[i]; y < y1[i] + 8; y++){
                checked[x][y] = 1;
            }
        }
    }

    //넓이 계산하기
    int area = 0;
    for(int i = 0; i < 2 * OFFSET + 1; i++){
        for(int j = 0; j < 2 * OFFSET + 1; j++){
            if(checked[i][j] == 1){
                area ++;
            }
        }
    }

    cout << area;
    return 0;
}