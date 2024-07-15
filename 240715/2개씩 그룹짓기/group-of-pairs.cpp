#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[2000];
    for(int i = 0; i < 2 * n; i++){
        cin >> arr[i];
    }   

    int sum = 0;
    sort(arr, arr + 2 * n);
    for(int i = 0; i < n; i++){
        for(int j = 2 * n; j >= n; j--){
            sum = max(sum,arr[i] + arr[j]);
        }
    }

    cout << sum;
    return 0;
}