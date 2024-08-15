#include <iostream>
#define MAX 101
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    int arr[MAX][MAX] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    // dx, dy technique
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int cnt = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int dir_num = 0; dir_num < 4; dir_num++){
                if(arr[i + dx[dir_num]][j + dy[dir_num]] == 1) cnt++;
                if(cnt == 3) {
                    ans++;
                    break;
                }
            }
            cnt = 0;
        }
    }
    
    cout << ans;
    return 0;
}