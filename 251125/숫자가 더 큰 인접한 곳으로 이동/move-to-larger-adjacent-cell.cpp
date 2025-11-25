#include <iostream>

using namespace std;

int n;
int r, c;
int a[101][101];
bool canMove = true;

int curr_x;
int curr_y;
bool InRange(int x, int y){
    if(x < 1 || x > n || y < 1 || y > n){
        return false;
    }
    return true;
}

void simulate(){

    int max_x = curr_x;
    int max_y = curr_y;
    int max_num = a[max_x][max_y];
    

    // 상하좌우 방향 순서대로
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    cout << a[max_x][max_y] << " ";
    // 인접한 노드 방문하기
    for(int i = 0; i < 4; i++){
        int newX = curr_x + dx[i];
        int newY = curr_y + dy[i];
        if(InRange(newX, newY) &&  a[newX][newY] > max_num){
            max_num = a[newX][newY];
            max_x = newX;
            max_y = newY;
            break;
        }
    }
    // 이동후에도 결과값이 달라지지 않았다면
    if(max_num == a[curr_x][curr_y]){
        return;
    }
   
    // 시작점 갱신하기
    curr_x = max_x;
    curr_y = max_y;
    simulate();
}

int main() {
    cin >> n >> r >> c;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.
   

    curr_x = r;
    curr_y = c;

    simulate();
  
    

    return 0;
}


