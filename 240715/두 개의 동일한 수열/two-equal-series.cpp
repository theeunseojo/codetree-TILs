#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100];
    int b[100];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    bool flag = false;

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]) {
            flag = false;
            break;
        }
        else flag = true;
    }
    if(flag) cout << "Yes";
    else cout << "No";
    return 0;
}