#include <iostream>
using namespace std;


bool IsDate(int m , int d){

    //IsMonth
    if(m < 1 || m > 12) return false;

    //IsDay
    if(d >= 1 && d <= 31){

        // 2월일때 
        if(m == 2)
            if( d <= 28) return true;
            else return false;
        // 1,3,5,7,12 31일 , 4,9,11 30일 (2월은 제외 )
        if(m == 4 || m == 9 || m == 11)
            if (d <= 30) return true;
            else return false;

        return true;
    }

    else return false;
}   

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    cin >> m >> d;

    if(IsDate(m,d)) cout << "Yes";
    else cout << "No";

    return 0;
}