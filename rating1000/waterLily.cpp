#include <iostream>
#include<cmath>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long

using namespace std;


void solve(){
    double h, l;
    cin >> h >> l;
    //Pythagorean theorem
    double a = abs(pow(l,2) - pow(h, 2));
    double ans = a/(2*h);
    cout << fixed << setprecision(13) << (ans) << endl;
}
int main(){
    solve();
}