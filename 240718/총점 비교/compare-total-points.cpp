#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int f, s, t;

        Student(string name, int f , int s , int t){
            this->name = name;
            this->f = f;
            this->s = s;
            this->t = t;
        }
        Student(){}
};
bool cmp(Student a , Student b){
    return a.f + a.s + a.t < b.f + b.s + b.t;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Student students[10];
    for(int i = 0; i < n; i++){
        string name;
        int f, s, t;
        cin >> name >> f >> s >> t;
        students[i] = Student(name, f , s , t);
    }
    sort(students , students + n, cmp);
    for(int i = 0; i < n; i++){
        cout << students[i].name << " ";
        cout << students[i].f << " ";
        cout << students[i].s << " ";
        cout << students[i].t << endl;
    }

    return 0;
}