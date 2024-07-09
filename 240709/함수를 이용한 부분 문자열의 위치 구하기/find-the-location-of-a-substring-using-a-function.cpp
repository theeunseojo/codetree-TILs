#include <iostream>
#include <string>
using namespace std;

string str1;
string str2;

int IndexStr(){
    // 부분문자열이 있으면, return값으로 index을 돌려주는 함수
    bool flag = false;
    int idx = 1001; 

    int a_len = str1.length();
    int b_len = str2.length();

    int cnt = 0;
    // 부분문자열 찾기  
    for(int i = 0; i < a_len - b_len + 1; i++){
        for(int j = 0; j < b_len; j++){ 
            //cout << str1[i + j] << " , " << str2[j] << endl;
            if(str1[i + j] == str2[j]) {
                flag = true;
                //cout << str1[i + j] << " = " << str2[j] << endl;
                }
            else {
                flag = false;
                break;
            }
        }
        // flag = true -> idx 저장 , 더 작은 idx만 저장 
        if(flag) {
            idx = (idx < i) ? idx : i;
            cnt++;  // 부분문자열의 갯수 
        }
    }
    if(cnt > 0) return idx; // 하나라도 존재하면 
    else return -1;
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str1 >> str2;
    
    int idx = IndexStr();
    cout << idx;

    return 0;
}