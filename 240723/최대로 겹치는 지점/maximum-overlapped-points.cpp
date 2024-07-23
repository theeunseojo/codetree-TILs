#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;


    // 선분 겹치기 
    int lines[101] = {};
    for(int i = 0; i < n; i++){
        int x1, x2;
        cin >> x1 >> x2;
        for(int i = x1; i <= x2; i++){
            lines[i]++;
        }
    }

    // 최댓값 구하기 
    int max = 0;
    for(int i = 0; i < 101; i++){
        if(max < lines[i]) max = lines[i];
    }
    
    cout << max;
    return 0;
}