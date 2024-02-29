#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for(int a = 0; a <= sqrt(m); a++){
        int b = m - (a*a);
        if(b >= 0 && (a + (b*b)) == n){
            cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}