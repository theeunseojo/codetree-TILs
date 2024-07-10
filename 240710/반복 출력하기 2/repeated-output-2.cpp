#include <iostream>
using namespace std;

void PrintWorld(int n){
    
    if(n == 0) return;
    
    PrintWorld(n - 1);
    cout << "HelloWorld" << endl;
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    PrintWorld(n);
    return 0;
}