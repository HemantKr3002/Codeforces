#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define od(n) (n & 1)
#define loop(k) for(ll i = 0; i < k; i++)
#define out(k) cout << k << endl
 
 
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll x,y;
        ll a,b;
        cin >> x >> y >> a >> b;
        if(b <= a * 2){
            out(min(x,y) * b + (max(x,y) - min(x,y)) * a);
        }
        else{
            out((x + y) * a);
        }
    }
    return 0;
}
