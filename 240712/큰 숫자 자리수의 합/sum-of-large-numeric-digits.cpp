#include <iostream>
using namespace std;

int Sum(int mul){
    if( mul < 10) return mul;
    return Sum(mul / 10) + ( mul % 10 );
}
int main() {
    // 여기에 코드를 작성해주세요.
    int mul = 1;


    for(int i = 0; i < 3; i++){
        int a;
        cin >> a;
        mul *= a;
    }
    cout << Sum(mul);
    return 0;
}