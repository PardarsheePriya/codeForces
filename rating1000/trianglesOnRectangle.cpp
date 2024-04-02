/*
Rectangle

corner: (0, 0) && (w, h)
area of triangle: 1/2 x b x h
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

void solve(){
    ll w, h;
    ll k, point, first, last;
    cin >> w >> h;
    ll area = 0;
    for(int i = 0; i < 4; i++){
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> point;
            if(j == 0){
                first = point;
            }
            if(j == k-1){
                last = point;
            }
        }
        
        ll base = last - first;
        if(i < 2){
            area = max(area, base*h);
        }
        else{
            area = max(area, base*w);
        }
    }
    cout << area << endl;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}