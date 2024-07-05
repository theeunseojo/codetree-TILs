#include <iostream>
using namespace std;

int GetMin(int a, int b, int c){
    
    int min = 0;
    if( a <= b && a <= c ) min = a;
    else if ( a <= b && a >= c) min = c;
    else min = b;
    return min;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a , b , c;
    cin >> a >> b >> c;
    cout << GetMin(a, b, c);
    return 0;
}