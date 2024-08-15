#include <iostream>
#define MAX 101
using namespace std;


int n;
bool InRange(int x, int y){
    return (0 <= x && x < n && 0 <= y && y < n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> n;
    
    int arr[MAX][MAX] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    // dx, dy technique
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    int cnt = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int dir_num = 0; dir_num < 4; dir_num++){
                int nx = i + dx[dir_num];
                int ny = j + dy[dir_num];
                if(InRange(nx, ny) && arr[nx][ny] == 1) cnt++;
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