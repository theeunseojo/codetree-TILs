#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s; 
    cin >> s;
    int l = s.length();
    
    cout << s << endl;
    for(int i = 0 ; i < l; i++){
        
        s = s.substr(l-1,1) + s.substr(0,l-1);
        cout << s << endl;
        
    }

    return 0;
}