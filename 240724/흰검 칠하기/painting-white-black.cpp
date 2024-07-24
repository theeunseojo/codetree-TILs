#include <iostream>
#define MAX 200000
using namespace std;

class Tile{
    public:
        int w_num, b_num;
        bool w, b;
        Tile(int w_num = 0, int b_num = 0, bool w = false, bool b = false){
            this->w_num = w_num;
            this->b_num = b_num;
            this->w = w;
            this->b = b;
        }

        
};

int main() {
    int n;
    cin >> n;
    
    Tile tile[MAX];
    int start_pos = 100000; // 음수의 index으로 인해 offset 더해줘야함.
    // 이동하며 타일 칠하기 
    for(int i = 0; i < n; i++){
        int pos;
        cin >> pos;
        char dir;
        cin >> dir;

        if(dir == 'L'){
            for(int j = start_pos; j > start_pos - pos; j--){ 
                tile[j].w_num++;
                tile[j].w = true;
                tile[j].b = false;
            }
            start_pos = start_pos - pos + 1;
        }
        else{
            for(int j = start_pos; j < start_pos + pos; j++){ 
                tile[j].b_num++;
                tile[j].w = false;
                tile[j].b = true;
            }
            start_pos = start_pos + pos - 1;
        }
    }  

    // 갯수 세기 
    int white_tile = 0;
    int black_tile = 0;
    int grey_tile = 0;

    for(int i = 0; i < MAX; i++){
    
        if(tile[i].w_num + tile[i].b_num >= 4){
            grey_tile++;
        }
        else{
            if(tile[i].w == true && tile[i].b == false) white_tile++;
            else if(tile[i].w == false && tile[i].b == true) black_tile++;
        }
        
    }
    cout << white_tile << " " << black_tile << " " << grey_tile;


    return 0;
}