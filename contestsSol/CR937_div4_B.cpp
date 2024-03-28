#include <iostream>
#include <iomanip>
#include <iterator>
#include <algorithm>
using namespace std;
void solve(){
    int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i%2 == 0){
                    if(j%2 == 0){
                        fill_n(ostream_iterator<char>(cout), 2, '#');
                    }
                    else{
                        fill_n(ostream_iterator<char>(cout), 2, '.');
                    }
                }
                else{
                    if(j%2 == 0){
                        fill_n(ostream_iterator<char>(cout), 2, '.');
                    }
                    else{
                        fill_n(ostream_iterator<char>(cout), 2, '#');
                    }
                }
            }
            
            cout << endl;
            for(int j = 0; j < n; j++){
                if(i%2 == 0){
                    if(j%2 == 0){
                        fill_n(ostream_iterator<char>(cout), 2, '#');
                    }
                    else{
                        fill_n(ostream_iterator<char>(cout), 2, '.');
                    }
                }
                else{
                    if(j%2 == 0){
                        fill_n(ostream_iterator<char>(cout), 2, '.');
                    }
                    else{
                        fill_n(ostream_iterator<char>(cout), 2, '#');
                    }
                }
            }
            cout << endl;
        }
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        solve();
    }
    
    return 0;
}
