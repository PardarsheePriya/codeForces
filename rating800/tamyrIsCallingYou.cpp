#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int x = (a*b)/__gcd(a, b);
    cout << c/x << endl;
    return 0;
}