#include <iostream>
#include <string>
#include <algorithm>  // for reverse
using namespace std;

int main() {
    string ticket_number;
    cin >> ticket_number;
    
    long long count = 0;
    for(int i = 0; i < ticket_number.size(); i++){
        if(ticket_number[i] == '4' || ticket_number[i] == '7'){
            count++;
        }
    }
    if(count == 0){
        cout << "NO" << endl;
        return 0;
    }
    while(count > 0){
        int digit = count % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO" << endl;
            return 0;
        }
        count /= 10;
    }
    
    cout << "YES" << endl;
    return 0;
}
