#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int>soldier;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        soldier.push_back(el);
    }
    
    //process
    int minDiff = abs(soldier[n-1] - soldier[0]);
    pair<int, int> reconUnit = {n, 1};

    for (int i = 0; i < n - 1; ++i) {
        int currentDiff = abs(soldier[i] - soldier[i + 1]);
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            reconUnit = {i + 1, i + 2};
        }
    }
    cout << reconUnit.first << " " << reconUnit.second << endl;
    return 0;
}