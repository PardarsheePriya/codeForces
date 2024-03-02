#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int y, w;
    cin >> y >> w;
    int req = 1 + 6 - max(y, w);
    int nume = req;
    int deno = 6;
    
    int gcd = abs(__gcd(nume, deno));
    nume /= gcd;
    deno /= gcd;
    
    cout << nume << '/' << deno << endl;
    return 0;
    
}