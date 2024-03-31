#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >>n;
    vector<int>v(n);
    map<int, int>m;
    vector<int>first;
    vector<int>second;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i]]++;
    }
    if(m.size() == 1){
        cout << "NO" << endl;
        return;
    }
    for(auto it: m){
        first.push_back(it.first);
        for(int i = 1; i < it.second; i++){
            second.push_back(it.first);
        }
    }
    reverse(first.begin(), first.end());
    cout << "YES" << endl;
    for(auto it: first){
        cout << it << " ";
    }
    for(auto it: second){
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
