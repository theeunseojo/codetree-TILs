#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int h;
        int w;

        Person(string name, int h , int w){
            this->name = name;
            this->h = h;
            this->w = w;
        }
        Person(){}
};

bool cmp(Person a , Person b){
    //키 오름차순
    if(a.h == b.h)
        return a.w > b.w;
    return a.h < b.h;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Person people[10];
    for(int i = 0; i < n; i++){
        string name;
        int h, w;
        cin >> name >> h >> w;
        people[i] = Person(name, h , w);
    }

    sort(people, people + n, cmp);
    for(int i = 0; i < n; i++){
        cout << people[i].name << " ";
        cout << people[i].h << " ";
        cout << people[i].w << endl;
    }
    return 0;
}