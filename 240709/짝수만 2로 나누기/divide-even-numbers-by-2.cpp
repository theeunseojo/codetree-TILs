#include <iostream>
using namespace std;

void Div2(int a[], int i){
    a[i] /= 2;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[51];
    int i = 0;

    for(i = 0; i < n; i++) {

        cin >> a[i];
        
        if(a[i] % 2 == 0) 
            Div2(a, i);
            cout << a[i] << " ";       
    
    }
    return 0;
}