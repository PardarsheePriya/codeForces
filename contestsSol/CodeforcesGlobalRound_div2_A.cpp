/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0;
    vector<int>index;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            index.push_back(i);
        }
        
    }
    
    if(index.size()%2 == 1 || index.size() == 2 && index[0] == index[1] -1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}