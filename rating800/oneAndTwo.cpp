#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >>n;
    vector<int>v(n);
    vector<int>two;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 2){
            two.push_back(i+1);
        }
    }
    if(two.size() == 0){
        cout << 1 << endl;
    }
    else if(two.size()%2 == 0){
        int a = two.size()/2;
        a--;
        cout << two[a] << endl;
    }
    else{
        cout << -1 <<  endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
