#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;
    string ans = "";

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            ans += '1';
        } else {
            ans += '0';
        }
    }

    cout << ans << endl;

    return 0;
}
