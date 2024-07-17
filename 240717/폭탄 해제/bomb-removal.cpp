#include <iostream>
using namespace std;

class Bomb{
    public:
        string code;
        char color;
        int sec;
    
    Bomb(string code, char color, int sec){
        this->code = code;
        this->color = color;
        this->sec = sec;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char color;
    int sec;
    cin >> code >> color >> sec;
    
    Bomb bomb = Bomb(code, color, sec);

    cout << "code : " << bomb.code << endl;
    cout << "color : " << bomb.color << endl;
    cout << "second : " << bomb.sec;
    return 0;
}