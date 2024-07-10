#include <iostream>
#define MAX 101
using namespace std;

int arr[MAX];

int Sum(int m){

    int sum = arr[m];

    while(m > 1){

        if(m % 2 == 0) {
            m = m / 2;
        }
        else {
            m -= 1;
        }
        sum += arr[m]; 
    }

    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    cout << Sum(m);
    return 0;
}