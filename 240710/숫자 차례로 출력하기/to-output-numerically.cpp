#include <iostream>
using namespace std;

int cnt = 1;
void PrintNum(int n){       // 1부터 N까지 숫자 차례대록 출력하는 함수 
    if (n == 0) return;

    PrintNum(n - 1);
    cout << cnt << " ";
    cnt++;

}

void PrintRevNum(int n){    // N부터 1까지 차례대로 출력하는 함수
    if(n == 0) return;
    
    cnt--;
    cout << cnt << " ";
    PrintRevNum(n - 1);
   
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    PrintNum(n); 
    cout << endl;
    PrintRevNum(n);

    return 0;
}