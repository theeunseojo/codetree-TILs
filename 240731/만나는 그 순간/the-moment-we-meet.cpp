#include <iostream>
#define MAX 1001
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int a[MAX] = {};
    int b[MAX] = {};

    //이동 및 기록 
    int start_pos = 0;
    int time = 0;
    // a 이동 
    //시간은 계속 이동하면서 , 방향에 따라 위치 기록  
    for(int i = 0; i < n; i++){
        char d;
        int t;
        cin >> d >> t; 
        if(d == 'L'){
            for(int j = 1; j <= t; j++){
                a[time++] = start_pos - j;
            }
            start_pos -= t;
        }
        else{
            for(int j = 1; j <= t; j++){
                a[time++] = start_pos + j;
            }
            start_pos += t;
        }
    }
    
    // b 이동 
    start_pos = 0;
    time = 0;
    for(int i = 0; i < m; i++){
        char d;
        int t;
        cin >> d >> t;
         if(d == 'L'){
            for(int j = 1; j <= t; j++){
                b[time++] = start_pos - j;
            }
            start_pos -= t;
        }
        else{
            for(int j = 1; j <= t; j++){
                b[time++] = start_pos + j;
            }
            start_pos += t;
        }
     
    }

    // 만나는 점 확인
    // time 까지 확인해야함.
    int meeting_point = -1;
    for(int i = 1; i < time; i++){
        if(a[i] == b[i]){
            meeting_point = i + 1;
            break;
        }
        
    }
    cout << meeting_point;
    return 0;
}