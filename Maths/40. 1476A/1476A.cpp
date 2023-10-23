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
        ll n,k;
        cin >> n >> k;
        //di == no. of parts of length k can the n be divided
        //All part created would have element 1
        ll di = n / k;
        //if the remainder left implies the sum would be greated than di * k to make
        //it minimum we tries to distribute k * (di + 1)
        ll tmp = (n % k) ? (k * (di + 1)) : k * di;
        //If the tmp can be distributed evenly then return tmp/n which would end up being 1
        //else we would have to increase the tmp % n numbers by one
        (tmp % n) ? out((tmp / n) + 1) : out(tmp / n);
    }
    return 0;
}
