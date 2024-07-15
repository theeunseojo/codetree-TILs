#include <iostream>
using namespace std;

int Lsm(int arr[], int n){
    if(n == 0) return 1;
    int lsm = Lsm(arr, n - 1); // 비교를 위해
    if(lsm % arr[n] != 0) return lsm * arr[n];
    return Lsm(arr, n -1);
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