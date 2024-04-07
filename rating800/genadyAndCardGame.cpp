/******************************************************************************
table - card on table
temp - 5 cards in hand
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#define ll long long int

using namespace std;

void solve(){
    string table;
    cin >> table;
    bool flag = false;
    for(int i = 0; i < 5; i++){
        string temp;
        cin >> temp;
        if(temp[0] == table[0] || temp[1] == table[1]){
            flag = true;
        }
        
    }
    
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main()
{
    solve();
}