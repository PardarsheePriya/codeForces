#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int h1, h2, m1, m2;
    char c;
    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;
    
    int min1 = h1 * 60 + m1;
    int min2 = h2 * 60 + m2;
    
    int mid = (min2 + min1) / 2;
    int hrs = mid / 60;
    int mins = mid % 60;
    
    if (hrs > 9 && mins > 9) {
        cout << hrs << ":" << mins << endl;
    }
    else {
        if (hrs < 10) {
            cout << "0" << hrs << ":";
        }
        else {
            cout << hrs << ":";
        }
        if (mins < 10) {
            cout << "0" << mins << endl;
        }
        else {
            cout << mins << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
