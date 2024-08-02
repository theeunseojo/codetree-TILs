#include <iostream>
#define MAX 1000000
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    // record the A
    int a[MAX] = {};
    int time = 1;
    for(int i = 0; i < n; i++){
        int v;
        int t;
        cin >> v >> t;

        // t번만큼 반복이므로 0부터 t -1까지 
        for(int j = 0; j < t; j++){
            a[time] = a[time - 1] + v;
            time += 1;
        }
    }

    // record the B
    int b[MAX] = {};
    time = 1;
    for(int i = 0; i < m; i++){
        int v;
        int t;
        cin >> v >> t;

        // t번만큼 반복이므로 0부터 t -1까지 
        for(int j = 0; j < t; j++){
            b[time] = b[time - 1] + v;
            time += 1;
        }
    }
    
    // A와 B 명예의 전당 기록 및 비교 
    // 선두가 바뀔 경우, 무조건 추가 이때 같은 경우도 고려 
    int cnt = 0;
    int leader = 0;
    for(int i = 0; i < time; i++){
        if(a[i] > b[i]){
            if(leader == 2 || leader == 3) cnt++;
            leader = 1;
        }
        else if(a[i] == b[i]){
            if(leader == 1 || leader == 2) cnt++;
            leader = 3;
        }
        else{
            if(leader == 1 || leader == 3) cnt++;
            leader = 2;
        }

    }
    
    if(cnt == 0) cout << cnt + 1;   // 선두가 안바뀌었을 경우 
    else cout << cnt;
    return 0;
}