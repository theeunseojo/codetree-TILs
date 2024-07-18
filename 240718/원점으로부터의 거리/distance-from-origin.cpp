#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

class Position{
    public: 
        int x;
        int y;
        int len;
        int num;
        Position(int x, int y, int len, int num){
            this->x = x;
            this->y = y;
            this->len = len;
            this->num = num;
        }
        Position(){}
};

// 절댓값을 구하는 함수 
int abs(int x, int y){
    if(x < 0) x = -x;
    if(y < 0) y = -y;
    //if(x + y < 0 ) return -(x + y);
    return x + y;
}

bool cmp(Position a, Position b){
    a.len = abs(a.x, a.y);
    b.len = abs(b.x, b.y);
    // 원점에서 가까운 점부터 올림차순  
    if(a.len != b.len) return a.len < b.len;
    // 거리가 같을 경우 번호가 작은 점부터 올림차순 
    return a.num < b.num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;

    Position pos[MAX];
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        pos[i] = Position(x, y, abs(x, y), i + 1);
    }

    // 정렬 
    sort(pos, pos + n , cmp);
    //거리를 기준으로 번호 출력
    for(int i = 0; i < n; i++){
        cout << pos[i].num << endl;
    }
    return 0;
}