#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    vector<ll> arr(t);
    for(auto a:arr) {
        cin >> a;
        //The sum of all face except top and bottom of dice would be 14 and as the top face is visible
        if(a % 14 <= 6 && a % 14 && a / 14) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
