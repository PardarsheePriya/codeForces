#include <iostream>
using namespace std;

int main(){
    int n_wal, m_chi;
    cin >> n_wal >> m_chi;
    
    int chips = 0;
    int i  = 1;
    while(m_chi >= i){
        chips += i;
        m_chi -= i;
        
        i = i%n_wal+1; //move next in circular way
    }
    
    cout << m_chi << endl;
    return 0;
}