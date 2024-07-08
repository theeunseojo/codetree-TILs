#include <iostream>
using namespace std;

// 수열 B가 수열 A의 연속 부분수열인지 판별하는 함수 
bool IsSub(int a[] , int b[]){
    int a_len = sizeof(a)  / sizeof(a[0]);
    int b_len = sizeof(b) / sizeof(b[0]);
    bool flag = true;

    for(int i = 0; i < a_len; i++){
        for(int j = 0; j < b_len; j++){
            if(a[i + j] == b[j]){ // 두 배열이 같은 지 check
                flag = true;
            }
            else{
                flag = false;
            }
        }
    }
    if(flag) return true;
    else return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int a[101] = {0, };
    int b[101] = {0, };

    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }

    
    // 수열 B가 부분수열인지 판별
    bool flag = IsSub(a, b);
    if(flag) cout << "Yes";
    else cout << "No";
    return 0;
}