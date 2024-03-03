#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    unordered_set<char>st;
    
    for(int i = 0; i < n; i++){
        s[i] = tolower(s[i]);
        st.insert(s[i]);
    }
    
    // cout << st.size() << endl;
    
    if(st.size() == 26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}