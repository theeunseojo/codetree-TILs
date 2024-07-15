#include <iostream>
using namespace std;

int arr[101];

int Max(int n){
    if(n == 0) return 0;
    int max = Max(n - 1);

    if(arr[n] >= max) return arr[n];
    return max;
} 
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    cout << Max(n);
    return 0;
}