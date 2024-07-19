#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

pair<int, int> list;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.first < b.first;
    return a.first < b.first;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    pair<int, int> list[MAX];
    for(int i = 0; i < n; i++){
        int a; 
        cin >> a;
        list[i].first = a;
        list[i].second = (i + 1);   // index
    }

    sort(list, list + n, cmp);

    // sorted original index array
    int sorted_index[MAX] = {};
    //make the sorted original index array
    for(int i = 0; i < n; i++){
        sorted_index[i] = list[i].second;
    }

    //nums to rank array
    int nums_to_rank[MAX] = {};
    for(int i = 0; i < n; i++){
        nums_to_rank[sorted_index[i]] = (i + 1);
    }

    for(int i = 1; i <= n; i++){
        cout << nums_to_rank[i] << " ";
    }
    return 0;
}