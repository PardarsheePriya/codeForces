#include <iostream>
#include <string>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int shovel = 1;
    while((k*shovel)%10 != 0 &&(k*shovel)%10 != r){
        shovel++;
    }
    cout << shovel << endl;
    return 0;
}
