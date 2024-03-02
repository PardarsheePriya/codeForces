#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    int remaining = 240-b;
    int i = 0;
    while (remaining >= (i + 1) * 5) {
        i++;
        remaining -= (i * 5);
        if(i == a){
            cout << i << endl;
            return 0;
        }
    }
    
    cout << i << endl;
    return 0;
}