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
    // case 1 : 같은 숫자 , case 2 : 다 다른 숫자 , case 3 : 섞임
    int cnt = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || arr[i] != arr[i - 1]){ // 다를 경우 1로 초기화
            cnt = 1;
        }
        if(arr[i] == arr[i - 1]) cnt++; 
        if(max < cnt) max = cnt;            // 최대 횟수 구하는 max로 cnt 값 저장.
        
    }
    cout << max;
    return 0;
}