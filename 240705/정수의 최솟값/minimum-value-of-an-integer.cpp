#include <iostream>
using namespace std;

int GetMin(int a, int b, int c){
    
    int min = a;
    min = (min < b) ? min : b;
    min = (min < c) ? min : c;
    
    return min;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a , b , c;
    cin >> a >> b >> c;
    cout << GetMin(a, b, c);
    return 0;
}