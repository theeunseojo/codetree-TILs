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
        int num;
        cin >> num;
        // 벌점 부여 번호 해당 학생 
        student[num]--;
        if(student[num] == 0){
            ans = num;
            break;
        }
    }

    cout << ans;
    
    return 0;
}