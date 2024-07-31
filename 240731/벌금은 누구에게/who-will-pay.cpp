#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, k;
    cin >> n >> m >> k;

    //student
    int student[101] = {};
    for(int i = 1; i <= n; i++){
        student[i] = k;
    }
    
    //벌금 부과
    int ans = -1;
    for(int i = 0; i < m; i++){
        int sc;
        cin >> sc;
        for(int j = 1; j <= n; j++){
            if(j == sc) student[j]--;
            if(student[j] == 0){
                ans = j;
                break;
            }
        }
    }

    cout << ans;
    
    return 0;
}