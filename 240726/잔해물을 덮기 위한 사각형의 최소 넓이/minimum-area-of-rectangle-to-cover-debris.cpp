#include <iostream>
using namespace std;
#define OFFSET 1000
#define MAX 2001

int main() {
    // 여기에 코드를 작성해주세요.
    int x1[2] = {};
    int x2[2] = {};
    int y1[2] = {};
    int y2[2] = {};

    //enter coordinates
    for(int i = 0; i < 2; i++){
        cin >> x1[i] >> y1[i];
        cin >> x2[i] >> y2[i];
        x1[i] += OFFSET;
        x2[i] += OFFSET;
        y1[i] += OFFSET;
        y2[i] += OFFSET;
    }
   
    // color a rectangle
    int rec[MAX][MAX] = {};
    for(int i = 0; i < 2; i++){
        for(int j = x1[i]; j < x2[i]; j++){
            for(int k = y1[i]; k < y2[i]; k++){
                rec[j][k] = i + 1;
            }
        }
    }
    
    // find the max, min
    int min_x = MAX;
    int min_y = MAX;
    int max_x = 0;
    int max_y = 0;
    int area = 0;
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(rec[i][j] == 1){
                if(min_x > i) min_x = i;
                if(min_y > j) min_y = j;
                if(max_x < i) max_x = i;
                if(max_y < j) max_y = j;
            }
        }
    }

    // find the area
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(rec[i][j] == 1) area = (max_x - min_x + 1) * (max_y - min_y + 1);
        }
    }
    cout << area;
    return 0;
}