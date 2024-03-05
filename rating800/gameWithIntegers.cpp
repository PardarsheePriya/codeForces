#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        if(((n+1) % 3 == 2) || ((n-1) %3 == 0) || ((n+1) % 3 == 0)){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
    return 0;
}
