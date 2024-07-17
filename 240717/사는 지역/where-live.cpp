#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public : 
        string name, addr , city;

        Person(string name, string addr, string city){
            this->name = name;
            this->addr = addr;
            this->city = city;
        }

        Person(){}
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Person person[11];

    for(int i = 0; i < n; i++){
        string name, addr, city;
        cin >> name >> addr >> city;
        person[i] = Person(name, addr, city);
    }

    int idx = 0;
    /*
    //사전순으로 이름이 가장 느린 사람 찾기.
    for(int i = 0; i < n; i++){
        if(person[i].name > person[idx].name) idx = i;
    }

*/
    string max = person[0].name;
    for(int i = 0; i < n; i++){
        if(max < person[i].name) {
            idx = i;
            max = person[i].name;
        }
    }
    
    cout << "name " << person[idx].name << endl;
    cout << "addr " << person[idx].addr << endl;
    cout << "city " << person[idx].city << endl;
    return 0;
}