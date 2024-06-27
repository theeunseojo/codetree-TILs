#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;
    int sum = 0;
    for(int i = 0; i < A.length(); i++){
        if(A[i] >= '0' && A[i] <= '9'){
            sum +=  (int)A[i] -(int)'0';
        }
    }
    cout << sum;
    return 0;
}