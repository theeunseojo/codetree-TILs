#include <iostream>
#include <string>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    string a , b;
    cin >> a >> b;

    int n = 0;

    while(1){

        a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
        n++;
        if(n == a.length()){
            cout << -1;
            break;
        }
        else if(a == b){
            cout << n; 
            break;
        }
    }
    return 0;
}