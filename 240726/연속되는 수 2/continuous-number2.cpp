#include <iostream>
#define MAX 1001
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[MAX] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // 횟수세기 
    int cnt = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || arr[i] != arr[i - 1]){
            cnt = 1;
        }
        if(arr[i] == arr[i - 1]) cnt++; 
        if(max < cnt) max = cnt;
        
    }
    cout << max;
    return 0;
}