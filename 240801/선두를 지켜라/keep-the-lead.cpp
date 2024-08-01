#include <iostream>
#define MAX 1000000 // 시간만 생각.
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //속도 , 시간 
    int n, m;
    cin >> n >> m;

    int a[MAX] = {};
    int b[MAX] = {};

    // a 이동 및 기록
    int time = 0;
    int len = 0;
    for(int i = 0; i < n; i++){
        int v, t;
        cin >> v >> t;
        //어차피 time 계산용 -> 3초 = 0 ~ 2
        for(int j = 0; j < t; j++){
            len += v;
            a[time++] = len;
        } 
    }
    
    //b 이동 및 기록
    time = 0;
    len = 0;
    for(int i = 0; i < m; i++){
        int v, t;
        cin >> v >> t;
        for(int j = 0; j < t; j++){
            len += v;
            b[time++] = len;
        } 
    }
    // a, b 선두 비교 
    int cnt = 0;
    bool a_first = false; // a 선두
    bool b_first = false; // b 선두
    for(int i = 0; i <= time; i++){
        if(!a_first && a[i] > b[i]){
            a_first = true;
            b_first = false;
            cnt++;
        }
        else if(!b_first && a[i] < b[i]){
            a_first = false;
            b_first = true;
            cnt++;
        }
    }
    cout << cnt - 1; // 0 제외 
    return 0;
}