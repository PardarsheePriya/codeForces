#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    int red, blue;
    cin >> red >> blue;
    
    int a  = min(red, blue);
    int b = max(red, blue) - a;
    
    cout << a << " " << b/2 << endl;
}