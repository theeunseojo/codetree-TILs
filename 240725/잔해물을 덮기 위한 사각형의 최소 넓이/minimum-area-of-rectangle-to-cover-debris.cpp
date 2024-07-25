#include <iostream>
#define OFFSET 1000
#define MAX 2001
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    // 사각형마다 번호 다르게 부여 후  , 처음 직사각형에서 열과 행의 최대 최소를 구한다.

    // 첫번째 직사각형 좌표 입력
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;

    // 두번째 직사각형 좌표 입력 
    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;
    x3 += OFFSET;
    y3 += OFFSET;
    x4 += OFFSET;
    y4 += OFFSET;

    // 사각형 칠하기 
    int checked[MAX][MAX] = {0,};
    for(int x = x1; x < x2; x++){
        for(int y = y1; y < y2; y++){
            checked[x][y] = 1;
        }
    }
    for(int x = x3; x < x4; x++){
        for(int y = y3; y < y4; y++){
            checked[x][y] = 2;
        }
    }

    // 직사각형 최소 넓이 구하기 
    // 우측 상단 좌표 구하기 
    int x = x1;
    int y = y1;
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(checked[i][j] == 1){
                if(x < i) x = i;
                if(y < j) y = j;
            }
        }
    }
    // 넓이 구하기 
    //시뮬레이션으로 해결 <- 엣지 케이스 : A < B, A = B, A < B
    int area = 0;
    for(int i = x1; i <= x; i++){
        for(int j = y1; j <= y2; j++){
            if(checked[i][j] == 1) area++;
        }
    }
    cout << area;
    return 0;
}