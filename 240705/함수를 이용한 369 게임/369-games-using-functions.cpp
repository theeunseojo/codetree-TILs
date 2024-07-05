#include <iostream>
#include <string>
using namespace std;

bool Find(int i){
    string str = to_string(i);
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '3' || str[i] == '6' || str[i] == '9') return true;
    }
    return false;
}

bool IsMagicNum(int i){
    return i % 3 == 0 || Find(i);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a , b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(IsMagicNum(i)) cnt++;
    }
    cout << cnt;
    return 0;
}