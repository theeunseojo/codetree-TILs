#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    // set the inital x, y 
    int nx = 0;
    int ny = 0;
 
    int dir_num = 3;
    // dx, dy technique
    int dx[4] = {1, 0 , -1, 0};
    int dy[4] = {0, -1, 0, 1};
    // rotate 
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'L'){
            dir_num = (dir_num -1 + 4) % 4;
        }
        else if(str[i] == 'R'){
            dir_num = (dir_num + 1) % 4;
        }
        else{
            nx += dx[dir_num];
            ny += dy[dir_num];
        }
    }
    cout << nx << " " << ny;
    return 0;
}