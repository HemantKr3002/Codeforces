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
        ll a,b,c;
        cin >> a >> b >> c;
        ll mini = min({a,b,c});
        ll minShot = (a + b + c) / 9;
        if(mini >= minShot && (a + b + c) % 9 == 0) out("YES");
        else out("NO");
    }
    return 0;
}
→Judgement Prot
