#include <iostream>

using namespace std;

int main() {
    // Read input
    int a, b, n;
    cin >> a >> b >> n;

    // Function to calculate GCD
    auto calculateGCD = [](int x, int y) {
        while (y != 0) {
            int temp = x % y;
            x = y;
            y = temp;
        }
        return x;
    };
    // Game logic
    while (n >= 0) {
        int gcd_a = calculateGCD(a, n);

        // Simon's move
        if (gcd_a <= n) {
            n -= gcd_a;
        } else {
            cout << 1 << endl;
            break;
        }

        int gcd_b = calculateGCD(b, n);

        // Antisimon's move
        if (gcd_b <= n) {
            n -= gcd_b;
        } else {
            cout << 0 << endl;
            break;
        }
    }

    return 0;
}
