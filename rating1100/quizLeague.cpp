#include <iostream>
#include <vector>
#include <fstream>
#include <climits>
#include <algorithm>
#define ll long long
using namespace std;

void solve() {
    ifstream myfile("input.txt");
    int n,k;
    myfile>>n>>k;
    vector<int>v(n);
    for(int i =0 ; i < n; i++){
        myfile >> v[i];
    }
    myfile.close();
    int a = k-1;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(v[a] == 1){
            ans = a+1;
             break;
        }
        
        if(a < n-1){
            a++;
        }
        else if(a == n-1){
            a = a%(n-1);
        }
    }
    ofstream ofile("output.txt");
    ofile<<ans;
    ofile.close();
}

int main() {
    solve();
    return 0;
}
