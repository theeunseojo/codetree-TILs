#include <iostream>
#define MAX 100
using namespace std;

int arr[MAX];

int Sum(int a1, int a2){
    
    int sum = 0;
    for(int i = a1; i <= a2; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n , m;
     int a1, a2;

    cin >> n;
    cin >> m;
    

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < m; i++){
        cin >> a1 >> a2;
        
        int result = Sum(a1,a2);
        cout << result << endl;
    }

    return 0;
}