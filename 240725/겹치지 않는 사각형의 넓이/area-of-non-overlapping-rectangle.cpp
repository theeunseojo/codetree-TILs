#include <iostream>
#define OFFSET 1000
using namespace std;

int main(){
    // 여기에 코드를 작성해주세요.
    // A , B 직사각형은 1로 바꾸고, M은 2로 해서 2개의 최소 직각형에서 2 찾기 

    int x1[3];
    int y1[3];
    int x2[3];
    int y2[3];

    for(int i = 0; i < 3; i++){
        cin >> x1[i] >> y1[i];
        cin >> x2[i] >> y2[i];
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }

    // A, B 칠하기 , M 칠하기
    int checked[2 * OFFSET + 1][2 * OFFSET + 1];
    for(int i = 0; i < 3; i++){
        // M 칠하기 
        if(i == 2){
            for(int x = x1[i]; x < x2[i]; x++){
                for(int y = y1[i]; y < y2[i]; y++){
                    checked[x][y] = 2;
                }
            }
            break;
        }
        // A, B 칠하기 
        for(int x = x1[i]; x < x2[i]; x++){
            for(int y = y1[i]; y < y2[i]; y++){
                checked[x][y] = 1;

            }
        }
    }
    

    // A, B 넓이의 합 구하기
    int area = 0;
    for(int i = 0; i < 2 * OFFSET + 1; i++){
        for(int j = 0; j < 2 * OFFSET + 1; j++){
            if(checked[i][j] == 1) area++;
        }
    }

    cout << area;

    return 0;
}