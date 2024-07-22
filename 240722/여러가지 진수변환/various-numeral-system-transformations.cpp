#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int b;
    cin >> b;

    int digits[20] = {};
    int cnt = 0; // for문이 아닌 while문을 사용해야되기 때문

    while(true){
        if(n < b) {
            digits[cnt++] = n;
            break;
        }
        digits[cnt++] = n % b;
        n /= b;
    }
    
    for(int i = cnt - 1; i >= 0; i--){
        cout << digits[i];
    }
    return 0;
}