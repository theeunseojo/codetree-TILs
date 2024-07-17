#include <iostream>
#include <string>
using namespace std;

class User {
    public:
        string id; 
        int level;

        User(string id, int level) {
            this->id = id;
            this->level = level;
        }
};

int main() {

    User user1 = User("codetree", 10);
    
    string id;
    int level;
    cin >> id >> level;

    User user2 =  User(id, level);
    
    cout << "user " << user1.id << " " << "lv " << user1.level << endl;
    cout << "user " << user2.id << " " << "lv " << user2.level << endl;
    
    return 0;
}