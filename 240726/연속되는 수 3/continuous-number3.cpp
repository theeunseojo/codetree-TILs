#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

int main(){
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[1001] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || (arr[i] < 0 && arr[i - 1] < 0) || (arr[i] > 0 && arr[i - 1] > 0)) cnt++;
        else cnt = 1;
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}