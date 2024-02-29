#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int>v;
    for(int i = 0; i < 4; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    
    unordered_set<int>s;
    for(int i = 0; i < 4; i++){
        s.insert(v[i]);
    }
    
    int ans = 4-s.size();
    cout << ans;
    return 0;
}