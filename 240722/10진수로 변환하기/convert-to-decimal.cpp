#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int num = 0;
    int i = 1;
    while(true){
        //마지막 n = 1 or 0일때 따로 처리해줘야함.
        if(n == 1) {
            num += i * n;
            break;
        }
        if(n == 0) break;
        num += i * (n % 10);
        i *= 2;
        n /= 10;
    }

    cout << num;
    return 0;
}