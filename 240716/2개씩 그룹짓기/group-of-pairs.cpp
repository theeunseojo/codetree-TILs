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
    
    // 가운데를 기준으로 대칭으로 합해서 최댓값 구하기 
    sort(arr, arr + 2 * n);
    int sum = 0;
    int num = 0;
    for(int i = 0; i < n; i++){
        sum = arr[i] + arr[2 * n - i];
        num = max(sum, num);
    }

    cout << num;
    return 0;
}