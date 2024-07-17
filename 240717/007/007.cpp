#include <iostream>
#include <string>
using namespace std;

class Mission{
    public:
        string code;
        char place;
        int time;

        Mission(string code, char place, int time) {
            this->code = code;
            this->place = place;
            this->time = time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Mission m = Mission("code", 'L', 0);

    string code;
    char place;
    int time;

    cin >> code;
    cin >> place;
    cin >> time;

    m.code = code;
    m.place = place;
    m.time = time;

    cout << "secret code : " << m.code << endl;
    cout << "meeting point : " << m.place << endl;
    cout << "time : " << m.time << endl;

    return 0;
}