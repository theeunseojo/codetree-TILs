#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person{
    public: 
        string name;
        int cm, kg;

        Person(string name, int cm, int kg){
            this->name = name;
            this->cm = cm;
            this->kg = kg;
        }
        Person(){}
};

bool cmp(const Person &a, Person &b){
    return a.cm < b.cm;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Person person_info[10];
    for(int i = 0; i < n; i++){
        string name;
        int cm, kg;
        cin >> name >> cm >> kg;
        person_info[i] = Person(name, cm , kg);
    }

    sort(person_info, person_info + n, cmp);

    for(int i = 0; i < n; i++){
        cout << person_info[i].name << " " << person_info[i].cm << " " << person_info[i].kg << endl;;
    }

    return 0;
}