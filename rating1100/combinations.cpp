#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second)
        return a.first > b.first;
    return a.second > b.second;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        int el1, el2;
        cin >> el1 >> el2;
        v[i] = make_pair(el1, el2);
    }

    sort(v.begin(), v.end(), cmp);

    int x = 1, sum = 0;
    for (int i = 0; i < n && x > 0; i++) {
        x--;
        sum += v[i].first;
        x += v[i].second;
    }

    cout << sum << endl;
}

int main() {
    solve();
    return 0;
}
