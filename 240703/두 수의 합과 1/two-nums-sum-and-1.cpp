#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;

    int count_one  = 0;
    int sum = a + b;

    string str = to_string(sum);

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            count_one += 1;
        }
    }
    cout << count_one;
    return 0;
}