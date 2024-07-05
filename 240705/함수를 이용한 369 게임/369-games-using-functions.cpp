#include <iostream>
using namespace std;

bool Find(int i){
    int q  = 1;
    int r  = 0;

    while(q != 0){
        q = i / 10;
        r = i % 10;
        if(q == 3 || q == 6 || q == 9 || r == 3 || r == 6 || r == 9) return true;
        else{
            if(q > 99) q = q / 10;
            r = q % 10;
            if(q == 3 || q == 6 || q == 9 || r == 3 || r == 6 || r == 9) return true;
        }
    return false; 
    }
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