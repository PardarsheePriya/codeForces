#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        arr.push_back(el);
    }
    
    int count = 1;
    int curr = 1;
    int maxi = arr[0];
    for(int i = 1; i < n; i++){
         if (arr[i] > arr[i - 1]) {
            curr++;
        } else {
            curr = 1;
        }

        count = max(curr, count);
        
        count = max(curr, count);
    }
    
    cout << count << endl;
    return 0;
}
