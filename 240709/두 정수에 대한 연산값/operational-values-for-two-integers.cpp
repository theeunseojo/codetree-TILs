#include <iostream>
using namespace std;
void Modify(int &a, int &b){
    
    if(a > b){
        a += 25;
        b *= 2;
    }
    else{
        a *= 2;
        b += 25;
    }
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    Modify(a, b);
    cout << a << " " <<  b;

    return 0;
}