#include <iostream>
#include <string>
using namespace std;

bool IsYoon(int y){
    if(y % 4 == 0){ // 4의 배수
        if((y % 100 == 0) && (y % 400 == 0)) return true; // 100의 배수 이면서 400의 배수 
        // 100의 배수 X 400의 배수 O , 100의 배수 o  400의 배수 X
        else return false;
    }
    else return false;
}
int LastDay(int y,int m){

    if(m == 2){
        // 윤년인지 check 
        if(IsYoon(y)) return 29;
        else return 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) return 30;
    else return 31;
}

void GetSeason(int y , int m , int d){

    // day가 해당 해에 존재한다면
    if(d <= LastDay(y, m)){
        if(m >= 3 && m <= 5) cout << "Spring";
        else if ( m >= 6 && m <= 8) cout << "Summer";
        else if( m >= 9 && m <= 11) cout << "Fall";
        else cout << "Winter";
    }
    else cout << -1 ;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y , m , d;
    cin >> y >> m >> d;

    
    GetSeason(y, m ,d);
    return 0;
}