#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string>v(n);
    
    //input Strings
    for(int i =0 ; i <n; i++){
        cin >> v[i];
    }
    // Last Row
    int result = 0;
    for(int i = 0; i < m; i++){
        if(v[n-1][i] == 'D'){
            result++;
        }
    }
    
    //last Col
    for(int i = 0; i < n; i++){ // Iterate over rows, not columns
        if(v[i][m-1] == 'R'){
            result++;
        }
    }
    
    cout << result << endl;
}
int main()
{
    int test;
    cin >> test;
    while(test--){
        solve();
    }

    return 0;
}
