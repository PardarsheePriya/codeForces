#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <climits>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        mini = min(abs(num), mini);
    }
    
    cout << mini << endl;
}
int main(){
    solve();
}