#include <iostream>
using namespace std;

bool IsYoon(int y){
    if(y % 4 == 0){
        if(y % 100 == 0 && y % 400 != 0) return false;
        else return true;
    }
    else return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int y; 
    cin >> y;

    if(IsYoon(y)) cout << "true";
    else cout << "false";
    return 0;
}