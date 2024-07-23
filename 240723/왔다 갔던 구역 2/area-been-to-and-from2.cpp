#include <iostream>
#define MAX 2001
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    // 영역 지나가기 
    int area[MAX] = {};
    int start_pos = 1000;   // 0을 기준으로 왼쪽이면 음수 index 최대로 갈 수 있는 범위가 -1000임.
    for(int i = 0; i < n; i++){
        int pos;    // 움직여야하는 칸 수 
        cin >> pos;
        string dir;
        cin >> dir;
        if(dir == "R"){
            for(int i = start_pos; i < start_pos + pos; i++){   // 구간이므로 [start_pos, start_pos + pos)
                area[i]++;
            }
            start_pos += pos;
        }
        else{
            for(int i = start_pos - 1; i >= start_pos - pos; i--){   // 구간이므로 
                area[i]++;
            }
            start_pos -= pos;
        }

    }

    // 2번이상 지나간 영역의 크기 계산
    int cnt = 0;
    for(int i = 0; i < MAX; i++){
        if(area[i] >= 2) cnt++;
    }
    
    cout << cnt;
    return 0;
}