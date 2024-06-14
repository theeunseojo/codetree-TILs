#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    int q;
    cin >> q;
    
    int len = s.length();
    int q_list[1000] = {};

    for(int i = 0; i < q; i++){
        cin >> q_list[i];
    }

    for(int i = 0; i < q; i++){
        if(q_list[i] == 1){   //가장 앞 문자을  뒤로  
            s = s.substr(1,len -1) + s.substr(0,1);
            cout << s << endl;
        }
        else if(q_list[i] == 2){ // 가장 뒤 문자를 앞으로 
            s = s.substr(len -1,1) + s.substr(0,len-1);
            cout << s << endl;
        }
        else{ // 문자열 좌우 (홀수, 짝수 )
            for(int i = 0; i < len; i++){
              cout << s[len - i -1];
            }
        }   
        
    }
    return 0;
}