#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//predefined product of binary decimals
vector<int> v = {1,10,11,100,101,110,111,121,1000,1001,1010,1011,1100,1101,1110,1111,1210,1221,1331,10000,10001,10010,10011,10100,10101,10110,10111,10201,11000,11001,11010,11011,11100,11101,11110,11111,11121,11211,12100,12111,12210,12221,12321,13310,13431,14641,100000};

void solve() {
    int n;
    cin >> n;
    if (find(v.begin(), v.end(), n) != v.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
