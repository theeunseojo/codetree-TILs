#include <iostream>
#define OFFSET 100
#define MAX 201
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int x1[11] = {};
    int x2[11] = {};
    int y1[11] = {};
    int y2[11] = {};
    for(int i = 0; i < n; i++){
        cin >> x1[i] >> y1[i];
        cin >> x2[i] >> y2[i];
        x1[i] += OFFSET;
        x2[i] += OFFSET;
        y1[i] += OFFSET;
        y2[i] += OFFSET;
    }

    // color the rectangle
    int rec[MAX][MAX] = {};
    for(int i = 0; i < n; i++){
        // red
        if(i % 2 == 0){
            for(int x = x1[i]; x < x2[i]; x++){
                for(int y = y1[i]; y < y2[i]; y++){
                    rec[x][y] = 1;
                }
            }
        }
        // blue
        else {
            for(int x = x1[i]; x < x2[i]; x++){
                for(int y = y1[i]; y < y2[i]; y++){
                    rec[x][y] = 2;
                }
            }
        }
    }

    // fine the area
    int area = 0;
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(rec[i][j] == 2) area++;
        }
    }
    cout << area;
    return 0;
}