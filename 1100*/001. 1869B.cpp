#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define od(n) (n & 1)
#define loop(k) for(ll i = 0; i < k; i++)
#define out(k) cout << k << endl
ll ceil(ll a, ll b) { return (a + b - 1) / b; }
ll pow(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a); a = (a * a); b = b >> 1;   } return res;}

//Calculates the prices between two cities
ll dis(pair<ll,ll>& pt1,pair<ll,ll>& pt2){
    return llabs(pt1.first - pt2.first) + llabs(pt1.second - pt2.second);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        //To minimize the cost to travell we can travel from a to b via travelling through few major cities as cost of travelling through them is zero
        //If there was no major city then minimum cost would be the cost of travelling directly from a to b
        ll n,k,a,b;
        cin >> n >> k >> a >> b;
        vector<pair<ll,ll>> cor(n);
        loop(n) cin >> cor[i].first >> cor[i].second;
        //Here we find the minimum distance of a and b to major city
        ll minA = LLONG_MAX / 2;
        ll minB = LLONG_MAX / 2;
        ll minDis = dis(cor[a - 1],cor[b - 1]);
        loop(k){
            minA = min(minA,dis(cor[a - 1],cor[i]));
            minB = min(minB,dis(cor[b - 1],cor[i]));
            minDis = min(minA + minB,minDis);
        }
        out(minDis);
    }
    return 0;
}
