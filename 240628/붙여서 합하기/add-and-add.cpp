#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;

    int num_1 = stoi(a+b);
    int num_2 = stoi(b+a);

    cout << num_1 + num_2;

    

    return 0;
}