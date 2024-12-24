#include <iostream>
using namespace std;



int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int time = 0;
    int x = 0;
    int y = 0;

    int dir_num;
    for(int i = 0; i < n; i++){
        char dir;
        cin >> dir;

        int dis;
        cin >> dis;

        if(dir == 'E') dir_num = 0;
        else if(dir == 'S') dir_num = 1;
        else if(dir == 'W') dir_num = 2;
        else dir_num = 3;
        
        for(int i = 1; i <= dis; i++){
            x += i * dx[dir_num];
            y += i * dy[dir_num];
            time++;
            if(x == 0 && y == 0){
                cout << time;
                return 0;
            }
        }
       
        
    }
    cout << "-1";
    
    return 0;
}