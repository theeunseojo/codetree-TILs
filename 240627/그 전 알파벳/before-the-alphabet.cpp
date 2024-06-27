#include <iostream>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    char x;
    cin >> x;
    
    int x_num = (int)x;

    if(x == 'a'){
        cout << 'z';
    }
    else{
        cout << (char)(x_num - 1);
    }
    return 0;
}