#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int len = str.length();

    while(len > 1){
        int n ;
        cin >> n;
      
        if(n > len){
            str = str.erase(len -1,1);
        }
        else{
            str = str.erase(n,1);
        }
        cout << str << endl;
        len--;
        
    }
    return 0;
}