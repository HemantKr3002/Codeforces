#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define od(n) (n & 1)
#define loop(k) for(ll i = 0; i < k; i++)
#define out(k) cout << k << endl
ll ceil(ll a, ll b) { return (a + b - 1) / b; }
ll pow(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a); a = (a * a); b = b >> 1;   } return res;}
void primeFactor(ll x,map<ll,ll>& mp){
    for(ll j = 2; j * j <= x;j++){
        while(x % j == 0){
            mp[j]++;
             x /= j;
         }
     }
     if(x > 1) mp[x]++;
 }
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n,m,k;
        cin >> n >> m >> k;
        //no. of cards would be distributed to each player
        ll dis = n / k;
        //Maximum number of card on can have == dis  == maximum no. of joker one can have
        ll jk = m - dis;
        //If no. of cards each player would have is greater than no. of joker then simply return no. of joker
        if(dis >= m) out(m);
        else{
            //Else distribute the remaining joker so that the maximum no. of joker one would have is minimum
            ll ex = ceil(jk,k - 1);
            out(dis - ex);
        }
    }
    return 0;
}
