#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int sum = 0;
    string str;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a;
    }

    str = to_string(sum);
    str = str.substr(1,str.length() -1) + str.substr(0,1);
    cout << str;
    return 0;
}