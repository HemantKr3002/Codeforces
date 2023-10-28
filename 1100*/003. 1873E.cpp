#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define od(n) (n & 1)
#define loop(k) for(ll i = 0; i < k; i++)
#define out(k) cout << k << endl
ll ceil(ll a, ll b) { return (a + b - 1) / b; }
ll pow(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a); a = (a * a); b = b >> 1;   } return res;}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll> arr(n);
        loop(n) cin >> arr[i];
        //The answer would lie between 0 and x + max element in array
        ll s = 0,e = x + *max_element(arr.begin(),arr.end());
        ll ans = INT_MIN;
        while(s <= e){
            ll mid = s + (e - s) / 2;
            ll req = 0;
            loop(n){
                if(mid > arr[i])
                    req += mid - arr[i];
            }
            //If the requirement satisfy the need search for bigger value else serach for possible value that satisfy the requirement
            if(req <= x){
                ans = max(ans,mid);
                s = mid + 1;
            }
            else  e = mid - 1;
        }
        out(ans);
    }
    return 0;
}
