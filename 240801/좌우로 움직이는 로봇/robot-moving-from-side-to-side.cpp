#include <iostream>
#include <algorithm>
#define MAX 1000000
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;

    int a[MAX] = {};
    int b[MAX] = {};
    
    // a 이동 및 기록
    int a_time = 0;
    int a_pos = 0;
    for(int i = 0; i < n; i++){
        int t;
        char d;
        cin >> t >> d;
        if(d == 'L'){
            while(t--){
                a[++a_time] = --a_pos;
            }
        }
        else{
            while(t--){
                a[++a_time] = ++a_pos;
            }
        }
    }
    // b 이동 및 기록
    int b_time = 0;
    int b_pos = 0;
    for(int i = 0; i < m; i++){
        int t;
        char d;
        cin >> t >> d;

        if(d == 'L'){
            while(t--){
                b[++b_time] = --b_pos;
            }
        }
        else{
            while(t--){
                b[++b_time] = ++b_pos;
            }
        }
    }

    // 종료 이후 채워주기
    int max_time = max(a_time, b_time);
    for(int i = a_time + 1; i <= max_time; i++){
        a[i] = a_pos;
    }
    for(int i = b_time + 1; i <= max_time; i++){
        b[i] = b_pos;
    }
    
    // 만나는 횟수 구하기 
    int cnt = 0;
    for(int i = 1; i <= max_time; i++){
        if(a[i] == b[i]){
            // 바로 직전 위치가 다를때 
            if(a[i - 1] != b[i - 1]) cnt++;
        }
    }
    cout << cnt;
    return 0;
}