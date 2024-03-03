#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0; // Initial value of x

    for (int i = 0; i < n; ++i) {
        string statement;
        cin >> statement;

        if (statement == "++X" || statement == "X++") {
            ++x;
        } else {
            --x;
        }
    }

    cout << x << endl; // Final value of x
    return 0;
}
