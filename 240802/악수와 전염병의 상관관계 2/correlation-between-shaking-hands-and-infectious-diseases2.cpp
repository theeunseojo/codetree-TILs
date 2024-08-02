#include <iostream>
#include <algorithm>
using namespace std;

// prgrammer info
class Programmer{
    public: 
        bool infected;
        bool infec;
        int hand;
        Programmer( bool infected = false, bool infec = false, int hand = 0){
            this->infected = infected;  // 감염 여부 
            this->infec = infec;        // 감염 가능성 여부 
            this->hand = hand;
        }
};
//infec situation
class InfecSituation{
    public:
        int t, x, y;
        InfecSituation(int t, int x , int y ){
            this->t = t;
            this->x = x;
            this->y = y;
        }
        InfecSituation(){}
};
// cmp
bool cmp(InfecSituation a, InfecSituation b){
    return a.t < b.t;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, p, T;
    cin >> n >> k >> p >> T;

    // 개발자 최초 감염자 및 정보 입력 
    Programmer programmer[101];
    for(int i = 1; i <= n;i++){
        programmer[i].hand = k;
    }
    programmer[p].infected = true;
    programmer[p].infec = true;
    
    // 개발자 감염 상황 저장 
    InfecSituation situation[251];
    for(int i = 0; i < T; i++){
        int t, x , y;
        cin >> t >> x >> y;

        situation[i] = InfecSituation(t, x, y);
    }
    // sorted by time 
    sort(situation, situation + T, cmp);

    //개발자 악수 시키기 및 감염시키기 
    for(int i = 0; i < T; i++){
        int t = situation[i].t;
        int x = situation[i].x;
        int y = situation[i].y;

        // 악수가 0이하이면 무조건 감염시키지 못함.이때, 재감염 상황 고려 X
        if(programmer[x].hand <= 0 || programmer[y].hand <= 0){
            if(programmer[x].infec) programmer[x].infec = false;
            if(programmer[y].infec) programmer[y].infec = false;
        }
        // x 나 y가 감염되어있을 경우 
        else if(programmer[x].infec || programmer[y].infec){
            // x가 감염되어있을 경우 
            if(programmer[x].infec){
                programmer[x].hand--;
                // y가 감염이 되어있느나 아니냐 확인
                if(programmer[y].infec) programmer[y].hand--;
                else {
                    programmer[y].infec = true;
                    programmer[y].infected = true;
                }
            }

            else{ // x가 감염이 아니고 y가 감염이 되어있을 경우 
                programmer[y].hand--;
                programmer[x].infec = true;
                programmer[x].infected = true;
            }
        }
    }


    // 감염된 사람 출력 
    for(int i = 1; i <= n; i++){
       cout << programmer[i].infected;
    }
    return 0;
}