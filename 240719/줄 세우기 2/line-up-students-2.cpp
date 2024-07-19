#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

class Student{
    public:
        int h, w , num;
        Student(int h , int w, int num){
            this->h = h;
            this->w = w;
            this->num = num;
        }
        Student(){}

};

bool cmp(Student a, Student b){
    // height ascending
    if(a.h  != b.h)
        return a.h < b.h;
    return a.w > b.w;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Student students[MAX];
    for(int i = 0; i < n; i++){
        int h , w;
        cin >> h >> w;
        students[i] = Student(h, w , (i + 1));
    }

    sort(students, students + n, cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].h << " " << students[i].w << " " << students[i].num << endl;
    }
    return 0;
}