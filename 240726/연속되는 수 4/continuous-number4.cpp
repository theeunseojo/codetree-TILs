#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    //수열 입력 
    int arr[MAX] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //연속 부분 수열 중 최대 길이 구하기 
    int cnt = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || arr[i - 1] < arr[i]) cnt++;
        else cnt = 1;
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}