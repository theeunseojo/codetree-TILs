#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A , B;
    cin >> A >> B;

    int idx = 0;
    while(1){
        // 문자열 찾기 

        for(int i = 0; i < A.length(); i++){
            for(int j = 0; j < B.length(); j++){
                if(A[i + j] == B[j]) {
                    idx = i;
                    continue;
                }
                A.erase(idx,B.length());
                break;
            }
        }
        break;
        
        
    }
    cout << A;
    return 0;
}