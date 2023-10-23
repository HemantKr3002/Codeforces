#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll t;
    cin >> t;
    while(t--){
        string s,t;
        cin >> s >> t;
        //find the lcm of the length of the given strings
        ll cm = lcm(s.size(),t.size());
        string st1 = "",st2 = "";
        //Make both the string of same length and compare if they are equal
        for(ll i = 0; i < cm / s.size(); i++) st1 += s;
        for(ll i = 0; i < cm / t.size(); i++) st2 += t;
        (st1 == st2) ? cout << st1 << endl : cout << -1 << endl;
    }
    return 0;
}
