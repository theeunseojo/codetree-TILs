#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[201];
    int cnt = 0;

    for(int i = 1; i <= 200; i++){
        cin >> str[i];
        if(str[i] == "0"){
            cout << cnt << endl;
            int idx = i;
            for(int i = 1; i < idx; i += 2){
                cout << str[i] << endl;
            }
            break;
        }
        else cnt++;
    }
    return 0;
}