#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string binary;
    cin >> binary;
    
    //2진수 -> 10진수 변환 
    int num = 0;    // 10진수 
    for(int i = 0; i < binary.size(); i++){
        num = num * 2 + int(binary[i] - '0');
    }

    num *= 17;
    // 10진수 -> 2진수 변환 
    int bits[20] = {};
    int cnt = 0;
    while(true){
        if(num < 2){
            bits[cnt++] = num;
            break;
        }
        bits[cnt++] = num % 2;
        num /= 2;
    }

    for(int i = cnt -1; i >= 0; i--){
        cout << bits[i];
    }
    return 0;
}