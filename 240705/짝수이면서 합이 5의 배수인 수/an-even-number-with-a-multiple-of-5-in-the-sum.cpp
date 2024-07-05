#include <iostream>
using namespace std;

bool IsNum(int n){
    int a , b = 0;
    a = n / 10;
    b = n % 10;
    int sum;
    sum = a + b;
    if(n % 2 == 0 && sum % 5 == 0) return true;
    else return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(IsNum(n)) cout << "Yes";
    else cout << "No";
    return 0;
}