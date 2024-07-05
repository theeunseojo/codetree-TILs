#include <iostream>
using namespace std;

bool IsCheck(char o){ 
    if( o != '+' && o != '-' && o != '/' && o != '*') return false;
    else return true;
}

int Sum(int a, int b){ return a + b;}

int Sub(int a, int b){ return a - b;}

int Div(int a, int b){ return a / b;}

int Mul(int a, int b){ return a * b;}
int main() {
    // 여기에 코드를 작성해주세요.
    int a , c;
    char o;
    cin >> a >> o >> c;

    if(IsCheck(o)){

        int result;
        if(o == '+') result = Sum(a,c);
        else if(o == '-') result = Sub(a,c);
        else if(o == '/') result = Div(a,c);
        else if(o == '*') result = Mul(a,c);
        cout << a <<" "<< o <<" "<< c << " = ";
        cout << result;
    }
    
    else cout << "False";

    return 0;
}