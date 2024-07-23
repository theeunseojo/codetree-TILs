#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;

    int blocks[n + 1] = {0,};   // 블록 초기 상황 
    int t = -1;
    for(int i = 1; i <= k; i++){
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            blocks[j] += 1; // 블록 쌓기 
        }
        t = max(t, blocks[i]);
    }
    
    cout << t;
    return 0;
}