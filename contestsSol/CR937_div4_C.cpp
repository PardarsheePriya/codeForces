#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void solve() {
    string time24;
    cin >> time24;
    stringstream ss(time24);

    if (time24.size() != 5 || time24[2] != ':') {
        return;
    }

    int hour, minute;
    char col;
    ss >> hour >> col>> minute;

    string time12 = (hour < 12) ? "AM" : "PM";

    if (hour == 0) {
        hour = 12;
    } else if (hour > 12) {
        hour -= 12;
    }

    stringstream res;
    res << ((hour < 10) ? "0" : "") << hour << ":" << ((minute < 10) ? "0" : "") << minute << " " << time12;

    cout << res.str() << endl;
    return;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}
