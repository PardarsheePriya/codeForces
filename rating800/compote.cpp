#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans = min(a, min(b/2, c/4));
    cout << ans*7 << endl;
    return 0;
}