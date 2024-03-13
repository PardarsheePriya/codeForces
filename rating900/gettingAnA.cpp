#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    vector<double>marks(n);
    for(int i = 0; i < n; i++){
        cin >> marks[i];
        sum += marks[i];
    }
    sort(marks.begin(), marks.end());
    double avg = round(sum/n);
    if(avg == 5){
        cout << 0 << endl;
    }
    else{
        int count = 0;
        for(int i = 0; i < n; i++){
            int cur = 5-marks[i];
            if(cur > 0){
                sum += cur;
                count++;
            }
            
            if(round(sum/n) == 5){
                cout << count << endl;
                return 0;
            }
        }
    }
}