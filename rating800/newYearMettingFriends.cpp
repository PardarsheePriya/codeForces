#include <iostream>
using namespace std;

int findMiddle(int a, int b, int c) {
    if ((a <= b && b <= c) || (c <= b && b <= a))
        return b;
    else if ((b <= a && a <= c) || (c <= a && a <= b))
        return a;
    else
        return c;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    int mid = findMiddle(a, b, c);
    int ans = 0;
    if(a != mid){
        ans += abs(a-mid);
    }
    if(b != mid){
        ans += abs(b-mid);
    }
    if(c != mid){
        ans += abs(c-mid);
    }
    cout << ans << endl;
    return 0;
}