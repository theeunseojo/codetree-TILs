#include <iostream>
using namespace std;

// 소수인지 판별하는 함수
bool IsPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0) return false; // 자기자신이 되기 전까지 나눠지면 소수가 아님.
    }
    return true;
}

//자릿수의 합이 짝수인지 판별하는 함수 
bool IsEven(int num){
    int sum = num % 10; // 일의자리 자릿수 대입  
    while(num > 0){
        num = ( num / 10 ) % 10; 
        sum += num;
    }
    if (sum % 2 == 0) return true;
    else return false;

}

// 소수이면서 모든 자릿수의 합이 짝수인 수의 개수를 구하는 함수 
int Gen(int a , int b){
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(IsPrime(i) && IsEven(i)) cnt++;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a , b; 
    cin >> a >> b;
    int cnt = Gen(a,b);
    cout << cnt ;
    return 0;
}