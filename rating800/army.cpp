#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>years;
    //years required to get promoted
    for(int i = 0; i < n-1; i++){
        int ele;
        cin >> ele;
        years.push_back(ele);
    }
    int a, b;
    cin >> a >> b;
    int year = 0;
    for(int i = a-1; i < b-1; i++){
        year += years[i];
    }
    
    cout << year << endl;
    return 0;
}