#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;

    int total = 0;

    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            total++;
        } else if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9') {
            total++;
        }
    }

    cout << total << endl;

    return 0;
}
