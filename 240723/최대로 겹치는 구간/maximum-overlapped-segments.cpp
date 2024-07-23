#include <iostream>
#define MAX 201
using namespace std;

int main() {
    int n;
    cin >> n;


    // 선분 겹치기 
    int lines[MAX] = {};
    for(int i = 0; i < n; i++){
        int x1, x2;
        cin >> x1 >> x2;
        if(x1 < 0 || x2 < 0){
            x1 += 100;
            x2 += 100;
        }
        for(int j = x1; j < x2; j++){
            lines[j]++;
        }
    }

    // 최댓값 찾기
    int max = 0;
    for(int i = 0; i < MAX; i++){
        if(max < lines[i]) max = lines[i];
    }

    cout << max;
    return 0;
}