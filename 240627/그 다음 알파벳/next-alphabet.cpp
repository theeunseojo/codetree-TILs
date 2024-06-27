#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    char a;
    cin >> a;
    
    int a_num = (char)a;

    if(a == 'z'){
        cout << 'a';
    }
    else {
        cout << (char)(a_num + 1) ;
    }
    return 0;
}