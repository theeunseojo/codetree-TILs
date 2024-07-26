#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;

    // 수열 입력
    int arr[MAX] = {};

    for(int i = 0; i < n; i++){

        cin >> arr[i];
    }
    
    // 최대길이 구하기
    int ans = 0;
    int cnt = 0;
    bool flag = false;
    for(int i = 0; i < n; i++){

        if(arr[i] > t) cnt++;
        else cnt = 0;
        ans = max(ans, cnt);
    }
    
    cout << ans;
    return 0;
}