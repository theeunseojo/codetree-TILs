#include <iostream>
using namespace std;

int GetNum(int arr[], int n){

    if(n == 1) return 1;
    if(n == 2) return 2;
    return GetNum(arr, n / 3) + GetNum(arr, n - 1);
}   

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[16];
    for(int i = 1; i <= 15; i++){
        cin >> arr[i];
    }

    cout << GetNum(arr, n);
    return 0;
}