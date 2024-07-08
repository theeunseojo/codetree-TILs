#include <iostream>
using namespace std;

// 수열 B가 수열 A의 연속 부분수열인지 판별하는 함수 
bool IsSub(int a[] , int b[] , int a_len , int b_len){

    bool flag = false;

    for(int i = 0; i < a_len; i++){
        for(int j = 0; j < b_len; j++){
            if(a[i + j] == b[j]){ // 부분배열인지 계속 확인 
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1];
    int b[n2];

    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }
    // 수열 B가 부분수열인지 판별
    int a_len = sizeof(a)  / sizeof(a[0]);
    int b_len = sizeof(b) / sizeof(b[0]);
    bool flag = IsSub(a, b , a_len, b_len);
    if(flag) cout << "Yes";
    else cout << "No";
    return 0;
}