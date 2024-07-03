#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string a;

    cin >> n;
    cin >> a;

    int idx;
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;

        if(a == input){
            idx = i ;
            break;
        }
    }

    cout << idx;
    return 0;
}