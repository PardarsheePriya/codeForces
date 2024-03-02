#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> bus(n);
    bool found = false;

    for (int i = 0; i < n; i++) {
        cin >> bus[i];
        // Check if the current row has an empty pair of seats
        if (!found && bus[i][0] == 'O' && bus[i][1] == 'O') {
            bus[i][0] = bus[i][1] = '+';
            found = true;
        } else if (!found && bus[i][3] == 'O' && bus[i][4] == 'O') {
            bus[i][3] = bus[i][4] = '+';
            found = true;
        }
    }

    if (found) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            cout << bus[i] << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
