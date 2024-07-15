#include <iostream>
using namespace std;

int gcd(int a, int b){
    int num = 0;
    for(int i = 1; i <= 10; i++){
        if(a % i == 0 && b % i == 0){
            num = i;
        } 
    }
    return num;
}

int Lsm(int arr[], int n){

    if(n == 0) return 1;
    int lsm = Lsm(arr, n - 1); // 비교를 위해
    if(lsm % arr[n] == 0) return Lsm(arr, n - 1);
    return lsm * arr[n] / gcd(lsm, arr[n]); // 두수의 최소 공배수 구하기 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[11];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    cout << Lsm(arr, n);
    return 0;
}