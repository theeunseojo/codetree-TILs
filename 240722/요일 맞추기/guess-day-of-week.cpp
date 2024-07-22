#include <iostream>
#include <string>
using namespace std;

int abs(int a){
    if( a >= 0) return a;
    return -a;
}

int MonthSum(int arr[], int month, int day){
    int sum = 0;
    for(int i = 0; i < month; i++){
        sum += arr[i];
    }
    sum += day;
    return sum;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    int elapsed_time = 0;
    int total_time = 0;
    int wanted_time = 0;

    //1월 1일 기준으로 계산
    elapsed_time = MonthSum(num_of_days, m1, d1);
    total_time = MonthSum(num_of_days, m2, d2);
    
    wanted_time = total_time - elapsed_time;

   if(wanted_time == 0) cout << days[wanted_time];
   else if(wanted_time < 0) {
        wanted_time = abs(wanted_time);
        if(wanted_time > 6) wanted_time %= 7;
        cout << days[7 - wanted_time];
    }
    else{
        if(wanted_time > 6) wanted_time %= 7;
        cout << days[wanted_time];
    }

    return 0;
}