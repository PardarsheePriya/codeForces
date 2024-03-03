#include <iostream>
#include <string>
using namespace std;
int main() {
    long long int tot, take;
    cin >> tot >> take;
    
    int a = tot/take;
    if(a%2 == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}
