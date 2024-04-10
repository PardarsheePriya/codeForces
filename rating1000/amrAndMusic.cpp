#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int days;
    cin >> days;
    vector<int> v(n);
    vector<pair<int, int>> p; // vector of pairs to store value and index
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        p.push_back({v[i], i + 1}); // push the pair of value and index
    }
    
    sort(p.begin(), p.end()); // sort pairs based on the value
    
    int sum = 0;
    vector<int> ans;
    for (auto it : p) { // iterate over sorted pairs
        if (sum + it.first <= days) {
            sum += it.first;
            ans.push_back(it.second); // push index into ans
        }
    }
    
    cout << ans.size() << endl;
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
