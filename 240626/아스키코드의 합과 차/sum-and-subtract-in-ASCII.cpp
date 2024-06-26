#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char A,B;
    int sum, sub = 0;

    cin >> A >> B;

    sum = (int)A +(int)B;

    if(A > B){
        sub = (int)A -(int)B;
    }
    else {
        sub = (int)B - (int)A;
    }
    
    cout << sum <<" "<< sub;
    return 0;
}