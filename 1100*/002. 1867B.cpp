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
        ll n;
        string bit;
        cin >> n >> bit;
        string ans = "";
        //here we have paired bit[i] and bit[n - i - 1] as they must be equal for palindrome
        //Here p represent the no. of pair having same bits and up represents no. of unpaired bit have different bits
        ll p = 0,up = 0;
        //up is the minimum no. of bits to be altered to make the bit palindrome
        //0 makes no change in bit when taking xor while 1 makes 1 change in bit 
        ll i = 0, j = n - 1;
        while(i <= j){
            if(i == j) p++;
            else if(bit[i] == bit[j]) p += 2;
            else up++;
            i++;j--;
        }
        //Till up we would have all zero as minimum no. of bits to be altered is up
        for(ll i = 0; i < up; i++) ans += '0';
        //Now we will start adding 1 to string is p is odd then add 1 to till p else add alternatively 1
        for(ll i = 0; i <= p; i++){
            if(p & 1) ans += '1';
            else
                (i & 1) ? ans += '0' : ans += '1';
        }
        for(ll i = ans.size(); i < n + 1; i++) ans += '0';
        out(ans);
    }
    return 0;
}
