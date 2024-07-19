#include <iostream>
using namespace std;

int main() {
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;


    int elapsed_time = a * 60 + b;
    int sum_time = c * 60 + d;

    int answer_time = sum_time - elapsed_time;
    cout << answer_time;
    return 0;
}