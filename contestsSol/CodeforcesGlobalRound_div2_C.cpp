//Ticket Hoarding
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <iomanip>

#define ll long long int

using namespace std;

void solution(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll>ticket;
    ticket.push_back(-1);
    for(int i = 0; i < n; i++){
        ll num;
        cin >> num;
        ticket.push_back(num);
    }
    
    sort(ticket.begin()+1, ticket.end());
    ll solu = 0;
    for(int i = 1; i <= n; i++){
        if(k >= m){
            solu += ((i-1)* m + ticket[i])*m;
            k -= m;
            continue;
        }
        else{
            solu += ((i-1)*m + ticket[i])*k;
            cout << solu << endl;
            return;
        }
    }
    
    cout << solu << endl;
}

int main()
{
    ll test;
    cin >> test;
    while(test--){
        solution();
    }
}