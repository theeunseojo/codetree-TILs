#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    
    // x, y 최종값 
    int nx = 0;
    int ny = 0;
    for(int i = 0; i < n; i++){
        char dir;
        int d;
        cin >> dir >> d;

        if(dir == 'E'){
            nx +=  d * dx[0];
            ny +=  dy[0];
        }
        else if(dir == 'S'){
            nx += dx[1];
            ny += d * dy[1];
        }
        else if(dir == 'W'){
            nx +=  d * dx[2];
            ny +=  dy[2];
        }
        else{
            nx +=  dx[3];
            ny +=  d * dy[3];
        }

    }
    cout << nx << " " << ny;
    return 0;
}