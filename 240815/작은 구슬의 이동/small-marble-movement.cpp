#include <iostream>
using namespace std;

// set the dir
int dir(char a){
    if(a == 'R') return 0;
    else if(a == 'D') return 1;
    else if(a == 'U') return 2;
    else return 3; 
}

int n;
bool InRange(int x, int y){
    return (1 <= x && x <= n && 1 <= y && y <= n);
}
int main() {
    // input
    int t;
    cin >> n >> t;
    int r, c;
    char d;
    cin >> r >> c >>  d;

    // dx, dy technique
    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};
    // set the intial 
    int x = r; // row
    int y = c; // col
    int move_dir = dir(d);

    while(t > 0){ // think about t < 0 
        // to check the range set the nx, ny
        int nx = x + dx[move_dir];
        int ny = y + dy[move_dir];

        if(!InRange(nx, ny)) {
            move_dir = 3 - move_dir;
            t--;
        }

        // after check, move 
        x = x + dx[move_dir];
        y = y + dy[move_dir];
        t--;

    }

    cout << x << " " << y;

    return 0;
}