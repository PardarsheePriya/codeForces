#include <iostream>
using namespace std;

int main(){
    int pan, door, heels, mom, dragon;
    cin >> pan >> door >> heels >> mom >> dragon;
    
    int answer = 0;
    for(int i = 1; i <= dragon; i++){
        if(i%pan == 0){
            answer++;
        }
        else if(i%door == 0){
            answer++;
        }
        else if(i%heels== 0){
            answer++;
        }
        else if(i%mom == 0){
            answer++;
        }
    }
    
    cout << answer << endl;
    return 0;
}