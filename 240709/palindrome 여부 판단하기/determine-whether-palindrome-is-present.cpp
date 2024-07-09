#include <iostream>
#include <string>
using namespace std;

bool IsPalin(string &str){
    //  뒤집은 문자열 & 원본 문자열 비교
    string rev = "";
    int len = str.length();

    for(int i = len - 1; i >= 0; i--){
        rev += str[i];
    }
    
    if(str == rev) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    if(IsPalin(str)) cout << "Yes";
    else cout << "No";
    return 0;
}