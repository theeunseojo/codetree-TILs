#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;

    // 1. a진수 -> 10진수 
    int m = 1; // 제곱 표현
    int num = 0;    // 10진수
    while(true){
        if(n < a){
            num += m * n;
            break;
        }
        num += m * (n % 10);    // 각자리수를 곱해줘야함.
        m *= a;
        n /= 10;    // 각 자리수 
    }
    
    // 2. 10진수 -> b진수
    int bits[20] = {}; // 비트 저장할 배열
    int cnt = 0;
    while(true){
        if(num < b){
            bits[cnt++] = num;  // cnt++ -> 출력시 cnt - 1
            break;
        }
        bits[cnt++] = num % b;
        num /= b;
    }

    // 3. b진수 출력 
    for(int i = cnt - 1; i >= 0; i--){
        cout << bits[i];
    }
    return 0;
}