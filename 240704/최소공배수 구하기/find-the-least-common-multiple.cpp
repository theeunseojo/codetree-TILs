#include <iostream>
using namespace std;

void Lgm(int n, int m){
    int cnt = 1;
    int min = ( n < m ) ? n : m;
    int max = ( n > m ) ? n : m;
    int num = 0;
    while(1){
        if((max * cnt) % min == 0){
            num = max * cnt;
            break;
        }
        cnt++; 
    }
    cout << num;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    Lgm(n, m);
    return 0;
}