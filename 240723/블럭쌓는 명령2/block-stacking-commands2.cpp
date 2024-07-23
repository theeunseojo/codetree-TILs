#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;

    int blocks[n] = {0,};   // 블록 초기 상황 

    for(int i = 1; i <= k; i++){
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            blocks[j] += 1; // 블록 쌓기 
        }
    }
    // 최댓값
    int ans = -1;
    for(int i = 1; i <= n; i++){
        ans = max(ans, blocks[i]);
    }
    cout << ans;
    return 0;
}