#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    unordered_set<int>st;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        for(int j = 0; j < num; j++){
            int a;
            cin >> a;
            st.insert(a);
        }
    }
    
    if(st.size() == m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}