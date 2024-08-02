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
            a[time++] = a[time - 1] + v;
        }
    }

    // record the B
    int b[MAX] = {};
    time = 1;
    for(int i = 0; i < n; i++){
        int v;
        int t;
        cin >> v >> t;

        // t번만큼 반복이므로 0부터 t -1까지 
        for(int j = 0; j < t; j++){
            b[time++] = b[time - 1] + v;
        }
    }
    // A와 B 명예의 전당 기록 및 비교 
    // 선두가 바뀔 경우, 무조건 추가 이때 같은 경우도 고려 
    int cnt = 0;
    int leader = 3;
    for(int i = 0; i <= time; i++){
        if(a[i] > b[i]){
            // leader is b or leader is same 
            if(leader == 2 || leader == 3){
                leader = 1;
                cnt++;
            }
        
        }
        else if(a[i] == b[i]){
            // leader is a or leader is b
            if(leader == 1 || leader == 2){
                leader = 3;
                cnt++;
            }
        }
        else{
            if(leader == 1 || leader == 3){
                leader = 2;
                cnt++;
            }
        }
    }
    if(cnt == 0) cnt = 1;   // 계속 같을때의 경우 예외처리
    else cout << cnt - 1;    // 0초에서는 무조건 같으므로, 그 경우 제외 
    return 0;
}