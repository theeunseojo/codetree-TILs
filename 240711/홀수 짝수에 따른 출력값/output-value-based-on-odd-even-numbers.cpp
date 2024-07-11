#include <iostream>
using namespace std;
int Sum(int n){
    if(n == 0) return 0;
    if(n % 2 != 0){
        if(n == 1) return 1;
    }
    else{
        if(n == 2) return 2;
    }
    return Sum(n - 2) + n;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << Sum(n);
    return 0;
}