#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        if(isdigit(str[i]) || isalpha(str[i])){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i]  = (char)((int)str[i] - (int)'A' + (int)'a');
            }
            cout << str[i];
        }
    }
    return 0;
}