#include <iostream>
using namespace std;

void PrintNLines(int n){
    for(int i = 0; i < n; i++){
        cout << "12345^&*()_" << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    PrintNLines(N);
    return 0;
}