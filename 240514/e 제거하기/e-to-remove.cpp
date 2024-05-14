#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;
    int idx = 0;

    for(int i = 0; i < A.length(); i++){
        if(A[i] == 'e'){
            idx = i;
            break;
        }
    }

    A.erase(idx,1);
    cout << A;
    return 0;
}