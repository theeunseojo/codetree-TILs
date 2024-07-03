#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a ,b;
    cin >> a >> b;
    int num;
    string sum1,sum2;
    for(int i = 0; i < a.length(); i++){
        if( a[i] >= '0' && a[i] <= '9'){
            sum1 += a[i];
        }
        else break;
    }

    for(int i = 0; i < b.length(); i++){
        if(b[i] >= '0' && b[i] <= '9'){
            sum2 += b[i];
        }
        else break;
    }

    int sum = 0;
    sum = stoi(sum1) + stoi(sum2);
    cout << sum;
    return 0;
}