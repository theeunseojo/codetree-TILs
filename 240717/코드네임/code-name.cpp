#include <iostream>
using namespace std;

class Spy{
    public:
        string code_name;
        int score;

        Spy(string code_name, int score){
            this->code_name = code_name;
            this->score = score;
        }

        Spy(){}

};

int main() {
    // 여기에 코드를 작성해주세요.
    Spy spy[5];

    for(int i = 0; i < 5; i++){
        string code_name;
        int score;
        cin >> code_name >> score;

        spy[i] = Spy(code_name, score);
    }

    int min = spy[0].score;
    int min_idx;
    for(int i = 0; i < 5; i++){
        // 최솟값 찾기 
        if(min >= spy[i].score){
            min = spy[i].score;
            min_idx = i;
        }
     
    }

    cout << spy[min_idx].code_name << " " << spy[min_idx].score;
    return 0;
}