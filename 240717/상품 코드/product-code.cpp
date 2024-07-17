#include <iostream>
using namespace std;

class Product{
    public:
        string name;
        int code;

        Product(string name, int code){
            this->name = name;
            this->code = code;
        }
};
int main() {
    // 여기에 코드를 작성해주세요.
    Product prod1 = Product("codetree", 50);

    string name;
    int code;
    cin >> name >> code;

    Product prod2 = Product(name, code);

    cout << "product " << prod1.code << " is " << prod1.name << endl;
    cout << "product " << prod2.code << " is " << prod2.name;
    return 0;
}