#include <iostream>
#include <string>
using namespace std;

int NumofDays(int arr[], int month, int day){
    int sum = 0;
    for(int i = 0; i < month; i++){
        sum += arr[i];
    }
    sum += day;
    return sum;
}

int main() {
    
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    string A;
    cin >> A;

    int days_of_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diff = NumofDays(days_of_month, m2, d2) - NumofDays(days_of_month,m1, d1);  // diff >= 0

    string days_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int cnt = 0; // 특정 요일 몇번 등장하는지 저장하는 변수

    //A가 무슨 요일인지, index 구하기 
    int idx;
    int len = sizeof(days_of_week) / sizeof(days_of_week[0]);
    for(int i = 0; i < len; i++){
        if(days_of_week[i] == A) {
            idx = i; 
            break;
        }
    }

    while(diff > 6){
        cnt++;          // 마지막 주 이전까지는 무조건 1번씩 들어가게 됨.
        diff -= 7;
    }
    if(diff >= idx) cnt++; // 마지막 주에서 특정 요일을 지나가는지 확인 후 , 계산. 
    cout << cnt;
    return 0;
}