#include <iostream>
#include <string>
using namespace std;

bool IsDiff(string &s){
    int cnt = 0;

    for(int i = 0; i < s.length() - 1; i++){
        if(s[i] != s[i + 1]) cnt++;
    }
    if(cnt > 0) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    if(IsDiff(str)) cout << "Yes";
    else cout << "No";
    return 0;
}