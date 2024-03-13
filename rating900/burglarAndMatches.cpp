#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Container {
    int matches;
    int matchboxes;

    bool operator<(const Container& other) const {
        return matches > other.matches; // Sort in descending order based on matches
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<Container> containers(m);

    for (int i = 0; i < m; ++i) {
        cin >> containers[i].matchboxes >> containers[i].matches;
    }

    sort(containers.begin(), containers.end());

    long long totalMatches = 0;
    int matchboxesTaken = 0;

    for (int i = 0; i < m && matchboxesTaken < n; ++i) {
        int boxesToTake = min(n - matchboxesTaken, containers[i].matchboxes);
        totalMatches += 1LL * boxesToTake * containers[i].matches;
        matchboxesTaken += boxesToTake;
    }

    cout << totalMatches << endl;

    return 0;
}
