#include <iostream>
using namespace std;

int PrintSum(int n){
    int sum = n * (n + 1) / 2;
    return (sum / 10 );
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num = PrintSum(n);
    cout << num;
    return 0;
}