#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int h;
        float w;

        Person(string name, int h , float w){
            this->name = name;
            this->h = h;
            this->w = w;
        }
        Person(){}
};

bool cmp_n(Person a, Person b){
    // 이름순 올림차순
    return a.name < b.name;
}

bool cmp_h(Person a, Person b){
    // 키순 내림차순
    return a.h > b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Person people[5];
    for(int i = 0; i < 5; i++){
        string name;
        int h;
        float w;
        cin >> name;
        cin >> h;
        cin >> w;
        people[i] = Person(name, h, w);
    }
    
    // 이름순으로 출력 
    sort(people, people + 5, cmp_n);
    cout << "name" << endl;
    for(int i = 0; i < 5; i++){
        cout << people[i].name << " ";
        cout << people[i].h << " ";
        // 소수점 첫째자리까지 출력 
        cout << fixed;
        cout.precision(1);
        cout << people[i].w << endl;
    }
    cout << endl;
    // 키 순으로 출력
    sort(people, people + 5, cmp_h);
    cout << "height" << endl;
    for(int i = 0; i < 5; i++){
        cout << people[i].name << " ";
        cout << people[i].h << " ";
        // 소수점 첫째자리까지 출력
        cout << fixed;
        cout.precision(1);
        cout << people[i].w << endl;
    }
        
    return 0;
}