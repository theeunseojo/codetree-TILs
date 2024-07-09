#include <iostream>
#include <vector>
#define MAX 50
using namespace std;
int n;

void PrintAb(int arr[]){
    for(int i = 0; i < n; i++){
        if(arr[i] < 0) arr[i] = -arr[i]; 
        cout << arr[i] << " ";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n;

    int arr[MAX];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    PrintAb(arr);

    return 0;
}