#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    //                         1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //elaspsed_date 
    int elaspsed_date = 0;
    for(int i = 1; i <= m1; i++){
        if(i == m1) {
            elaspsed_date += d1;
            break;
        }
        elaspsed_date += num_of_days[i];
    }

    // sum_date
    int sum_date = 0;
    for(int i = 1; i <= m2; i++){
        if(i == m2) {
            sum_date += d2;
            break;
        }
        sum_date += num_of_days[i];
    }

    cout << sum_date - elaspsed_date + 1;
    return 0;
}