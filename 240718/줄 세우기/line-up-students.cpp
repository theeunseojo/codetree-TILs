#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

class Student{
    public:
        int h;
        int w;
        int num;

        Student(int h , int w , int num){
            this->h = h;
            this->w = w;
            this->num = num;
        }
        Student(){}
};

bool cmp(Student a , Student b){
    // 키 내림차순 
    if(a.h != b.h){
        return a.h > b.h;
    }
    // 몸무게 내림차순
    if(a.w != b.w){
        return a.w > b.w;
    }
    // 번호 올림차순
    return a.num < b.num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;

    Student students[MAX];
    for(int i = 0; i < n; i++){
        int h;
        int w;
        cin >> h >> w;
        students[i] = Student(h, w, i + 1);
    }
    // align
    sort(students, students + n, cmp);

    // output
    for(int i = 0; i < n; i++){
        cout << students[i].h << " ";
        cout << students[i].w << " ";
        cout << students[i].num << endl;
    }
    return 0;
}