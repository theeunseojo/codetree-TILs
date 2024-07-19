#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    //day -> min
    int month_to_min = (a - 11) * 24 * 60 ;

    if(month_to_min < 0) {
        cout << -1;
        return 0;
    }

    // hour calculate
    int elaspsed_time = (b * 60 + c) - (11 * 60 + 11);
    // if month is correct, we need to check the time
    if(month_to_min == 0 && elaspsed_time){
        cout << -1;
        return 0;
    }
    
    if(elaspsed_time < 0) (11 * 60 + 11) - (b * 60 + c);

    cout << month_to_min + elaspsed_time;
    return 0;
}