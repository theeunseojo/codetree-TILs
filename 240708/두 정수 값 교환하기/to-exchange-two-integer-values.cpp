#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n , m;
    cin >> n >> m ;
    swap(n, m);
    cout << n << " " << m;
    return 0;
}