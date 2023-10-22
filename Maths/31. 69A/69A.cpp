#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll n;
    cin >> n;
    ll sumx = 0, sumy = 0, sumz = 0;
    while(n--){
        ll x,y,z;
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    //Sum of all component of force in x,y,z must be zero
    (sumx || sumy || sumz) ? cout << "NO" << endl : cout << "YES" << endl;
    return 0;
}
