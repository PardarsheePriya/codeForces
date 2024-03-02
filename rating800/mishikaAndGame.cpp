#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt_a = 0;
    int cnt_b = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a > b){
            cnt_a++;
        }
        else if(a < b){
            cnt_b++;
        }
    }
    
    if(cnt_a == cnt_b){
        cout << "Friendship is magic!^^" << endl;
    }
    else if(cnt_a > cnt_b){
        cout << "Mishka" << endl;
    }
    else{
        cout << "Chris" << endl;
    }
    
    return 0;
}
