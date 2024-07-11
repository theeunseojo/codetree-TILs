#include <iostream>
using namespace std;

int cnt = 0;    //횟수 구하는 변수 

int GetNum(int n){

    if(n == 1) {
        return cnt;  // 종료조건
    }
    cnt++;
    if(n % 2 == 0){
        return GetNum(n / 2);
    }
    else{
        return GetNum(n / 3);
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;

    cout << GetNum(n);

    return 0;
}