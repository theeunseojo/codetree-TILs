#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Equal(string str1, string str2){
    // str1이 같은지 아닌지 check 하는 함수
    // 길이 check
    int len1 = str1.length();
    int len2 = str2.length();
    
    // 정렬 
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(len1 != len2) return false;
    for(int i = 0; i < len1; i++){
        if(str1[i] != str2[i]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;

    if(Equal(str1, str2)) cout << "Yes";
    else cout << "No";
    return 0;
}