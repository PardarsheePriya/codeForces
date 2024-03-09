#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long int> candi(n);
    vector<long long int> orange(n);

    for(int i = 0; i < n; i++) {
        cin >> candi[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> orange[i];
    }

    // Find the minimum candies and oranges
    long long int minCandies = *min_element(candi.begin(), candi.end());
    long long int minOranges = *min_element(orange.begin(), orange.end());

    long long int ans = 0;

    for(int i = 0; i < n; i++) {
        // Calculate the moves required for each gift
        long long int moveCandies = candi[i] - minCandies;
        long long int moveOranges = orange[i] - minOranges;

        // Sum up the maximum of the two differences
        ans += max(moveCandies, moveOranges);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }

    return 0;
}
