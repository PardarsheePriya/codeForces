#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    
    long long int count = 9;
    long long int digit = 1;
    while(n > count*digit){
        n -= count*digit;
        count = count*10;
        digit++;
    }
    
    int num = pow(10, digit- 1) + (n - 1) / digit;
    int position = (n - 1) % digit;

    string numberStr = to_string(num);
    cout << numberStr[position] - '0';
    cout << endl;
    return 0;
}