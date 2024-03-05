#include <iostream>
#include <vector>

using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        while (true) {
            bool sorted = true;

            // Process
            for (int i = 1; i < n - 1; i++) {
                if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
                    swap(v[i], v[i + 1]);
                    sorted = false;
                }
            }

            if (sorted) {
                break;
            }
        }

        // Check if the permutation is sorted
        bool isSorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                isSorted = false;
                break;
            }
        }

        if (isSorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
