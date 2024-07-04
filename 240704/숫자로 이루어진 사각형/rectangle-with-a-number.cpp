#include <iostream>
using namespace std;

void PrintRect(int n){
    int cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(cnt > 9) cnt = 1;
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int input;
    cin >> input;

    PrintRect(input);
    return 0;
}