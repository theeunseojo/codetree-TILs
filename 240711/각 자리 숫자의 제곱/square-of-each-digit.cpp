#include <iostream>
using namespace std;

int GetSum(int n){
    // 함수를 10으로 나눈 몫 + 나머지 제곱
    if(n < 10){
        return n * n;
    }

    return GetSum(n / 10) + ((n % 10) * (n % 10));
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;


    cout << GetSum(n);
    
    return 0;
}