#include <iostream>
using namespace std;

int GetNum(int n){

    if(n == 1) return 2;
    if(n == 2) return 4;

    return (GetNum(n - 1) * GetNum(n - 2) ) % 100;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << GetNum(n);
    return 0;
}