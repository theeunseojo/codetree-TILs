#include <iostream>
#include <string>
#define DIRNUM 4
using namespace std;

int dx[DIRNUM] = {1, 0, -1, 0};
int dy[DIRNUM] = {0, -1, 0, 1};

int elapsed_time = 0;
int dir = 3;
int x = 0;
int y = 0;
    
bool Move(char op){
   if(op == 'L'){
        dir = (dir - 1) % 4;
   }
   else if(op == 'R'){
        dir = (dir + 1) % 4;
   }
   else{
        x += dx[dir];
        y += dy[dir];
   }
   
   elapsed_time++;
   if(x == 0 && y == 0) return true;
   return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    bool done = false;
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
       char op = str[i];
        
        done = Move(op);
        if(done) {
          cout << elapsed_time;
          return 0;
        }
    }

    if(!done) cout << "-1";
    return 0;
}

// while문에서 done = false일 경우, while문을 빠져나오지 못한다 -> 런타임에러 