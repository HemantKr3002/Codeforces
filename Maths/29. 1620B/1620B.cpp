#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while(t--){
        ll w,h;
        cin >> w >> h;
        ll max_ar = 0;
        ll k;
        cin >> k;
        vector<ll> pt(k);
        //As the area of triangle would be half of the base and height
        //height being constant we must increase the base
        for(ll i = 0; i < k; i++) cin >> pt[i];
        max_ar = max(max_ar,(pt.back() - pt[0]) * h);
        cin >> k;
        pt.resize(k);
        for(ll i = 0; i < k; i++) cin >> pt[i];
        max_ar = max(max_ar,(pt.back() - pt[0]) * h);
        cin >> k;
        pt.resize(k);
        for(ll i = 0; i < k; i++) cin >> pt[i];
        max_ar = max(max_ar,(pt.back() - pt[0]) * w);
        cin >> k;
        pt.resize(k);
        for(ll i = 0; i < k; i++) cin >> pt[i];
        max_ar = max(max_ar,(pt.back() - pt[0]) * w);
        cout << max_ar << endl;
    }
    return 0;
}
