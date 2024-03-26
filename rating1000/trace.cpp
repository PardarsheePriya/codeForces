#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#define pi 3.1415926536

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10); // Set precision globally
    double ans = 0;
    if (n == 1) {
        double a;
        cin >> a;
        cout << pi * a * a << endl;
        return 0;
    }
    else{
        vector<double>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        double area = 0;
        if(n%2 == 0){
            for(int i = 0; i < n; i++){
                double area = pi*v[i]*v[i];
                if(i%2 == 0){
                    ans -= area;
                }
                else{
                    ans += area;
                }
            }
        }
        else{
            for(int i = 0; i < n; i++){
                double area = pi*v[i]*v[i];
                if(i%2 == 1){
                    ans -= area;
                }
                else{
                    ans += area;
                }
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}
