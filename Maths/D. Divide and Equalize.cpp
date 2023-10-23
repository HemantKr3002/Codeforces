#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define od(n) (n & 1)
#define loop(k) for(ll i = 0; i < k; i++)
#define out(k) cout << k << endl
ll ceil(ll a, ll b) { return (a + b - 1) / b; }
ll pow(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a); a = (a * a); b = b >> 1;   } return res;}
 
int main() {
    ll t;
    cin >> t;
    while(t--){
        //As the product will remain same as we are dividing and multiplying the pairs with same number
        //At the end we want each number to be equal implies the product must be the perfect nth root of some integer
        map<ll,ll> mp;
        ll n;
        cin >> n;
        loop(n){
            ll x;
            cin >> x;
            //We prime factorize each number and counted each factor
            for(ll j = 2; j * j <= x;j++){
                while(x % j == 0){
                    mp[j]++;
                    x /= j;
                }
            }
            if(x > 1) mp[x]++;
        }
        bool flag = true;
        //Now we check if each factor is divisible by n 
        //Then only it would be perfect nth root
        for(auto it:mp){
            if(it.second % n){
                out("NO");
                flag = false;
                break;
            }
        }
        if(flag) out("Yes");
    }
    return 0;
}
