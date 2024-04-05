/******************************************************************************

xcurr = x 
ycurr = y
target = 0, 0

onemove, bothmove

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>

#define ll long long int

using namespace std;

void solve(){
    ll xcurr, ycurr;
    cin >> xcurr >> ycurr;
    ll onemove, bothmove;
    cin >> onemove >> bothmove;
    
    ll amount = 0;
    ll amount2 = 0;
    amount2 += abs(xcurr) * onemove + abs(ycurr) * onemove;
    if(abs(xcurr) < abs(ycurr)){
        amount += abs(xcurr)*bothmove;
        ycurr = abs(ycurr) - abs(xcurr);
        amount += abs(ycurr)*onemove;
    }
    else{
        amount += abs(ycurr)*bothmove;
        xcurr = abs(xcurr) - abs(ycurr);
        amount += abs(xcurr)*onemove;
    }
    
    
    
    cout << min(amount2, amount) << endl;
    
}
int main()
{
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}