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
        ll n,k;
        string str;
        cin >> n >> k;
        cin >> str;
        //If k is even then the answer would be the sorted string
        if(!od(k)){
            sort(str.begin(),str.end());
            out(str);
        }
        //else it would the merged string comes out after merging sorted odd and even indices string
        //As for odd case the element at odd place would always remain at odd place and vice versa
        else{
            string odd = "";
            string even = "";
            string ans(n,'0');
            for(int i = 0; i < n; i++){
                if(od(i)) odd += str[i];
                else even += str[i];
            }
            sort(odd.begin(),odd.end());
            sort(even.begin(),even.end());
            for(int i = 0; i < n; i++){
                if(od(i)) ans[i] = odd[i / 2];
                else ans[i] = even[i / 2];
            }
            out(ans);
        }
    }
    return 0;
}
