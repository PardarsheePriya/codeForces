#include <iostream>
using namespace std;
int main() {
    int limak, bob;
    cin >> limak >> bob;
    
    int i = 0;
    while(limak <= bob){
        limak = limak*3;
        bob = bob*2;
        i++;
    }
    
    cout << i << endl;

    return 0;
}
