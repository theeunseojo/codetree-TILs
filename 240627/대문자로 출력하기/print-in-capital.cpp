#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;

    cin >> a;

    for(int i = 0; i < a.length(); i++){
        if(a[i] >= 'A' && a[i] <= 'z'){
            if(a[i] >= 'a' && a[i] <= 'z'){
                a[i] = (char)((int)a[i] - (int)'a' + (int)'A');
            }
            cout << a[i];
        }
    }
    return 0;
}