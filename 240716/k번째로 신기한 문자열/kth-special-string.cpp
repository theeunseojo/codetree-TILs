#include <iostream>
#include <string>
#include <algorithm>
#define MAX 100
using namespace std;

bool Equal(string str, string t){
    for(int i = 0; i < t.length(); i++){
        for(int j = 0; j < t.length(); j++){
            if(str[i + j] != t[j]) return false;
        }
        return true;
    }
    return true;
}

int main() {
    // input
    int n, k;
    cin >> n >> k;

    string t;
    cin >> t;

    string str[MAX];
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }

    // align first
    sort(str, str + n);

    // count the string starting with t
    int idx = 0;
    for(int i = 0; i < n; i++){
       
        if(Equal(str[i], t)) idx++;

        if(idx == k){
            cout << str[i];
            break;
        }
    }
    return 0;
}