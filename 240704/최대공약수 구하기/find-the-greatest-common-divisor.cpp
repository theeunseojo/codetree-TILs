#include <iostream>
using namespace std;

void GetComNum(int n , int m){
    int min = (n < m) ? n : m;
    int num = 0;
    for(int i = 1; i <= min; i++){
        if(n % i == 0 && m % i == 0) num = i;
    }
    cout << num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a , b;
    cin >> a >> b;
    
    GetComNum(a,b);
    return 0;
}