#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    
    while(1){
        cin >> str;
        if(str == "END") break;

        for(int i = str.length() - 1; i >= 0; i--){
            cout<< str[i];
        }
        cout << endl;

    }
    return 0;
}