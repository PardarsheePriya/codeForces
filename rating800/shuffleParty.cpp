#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    int cur = 1;
    while (cur*2 <= n) cur*=2;
    cout << cur << '\n';
    }
}
