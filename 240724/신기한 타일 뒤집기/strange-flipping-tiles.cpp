#include <iostream>
#define MAX 100000
using namespace std;

class Tile{
    public:
        bool w;
        bool b;

        Tile(bool w = false, bool b = false){
            this->w = w;
            this->b = b;
        }
};

int main() {
    int n;
    cin >> n;

    // 타일 채우기 
    Tile tile[2 * MAX + 1];
    int start_pos = MAX;    // 음수 index 처리 
    for(int i = 0; i < n; i++){
        int pos;
        cin >> pos;
        char dir;
        cin >> dir;

        if(dir == 'L'){
            for(int i = start_pos; i > start_pos - pos; i--){
                tile[i].w = true;
                tile[i].b = false;
            }
            start_pos = start_pos - pos + 1;
        }
        else{
            for(int i = start_pos; i < start_pos + pos; i++){
                tile[i].w = false;
                tile[i].b = true;
            }
            start_pos = start_pos + pos - 1;
        }
    }
    
    // 갯수 세기
    int white_num = 0;
    int black_num = 0;
    for(int i = 0; i < 2 * MAX + 1; i++){
        if(tile[i].w == true) white_num++;
        else if(tile[i].b == true) black_num++;
    }
    
    cout << white_num << " " << black_num;
    return 0;
}