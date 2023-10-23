#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define od(n) (n & 1)
#define loop(k) for(ll i = 0; i < k; i++)
#define out(k) cout << k << endl
bool check(ll r,ll g,ll b,ll w){
  return r%2 + g%2 + b%2 + w%2 <= 1;
}
 
int main() {
    ll t;
    cin >> t;
    while(t--){
        // vector<ll> clr(4);
        // ll total = 0;
        // ll odd = 0;
        // ll zero = 0;
        // loop(4){
        //     cin >> clr[i];
        //     total += clr[i];
        //     if(od(clr[i])) odd++;
        //     if(clr[i] == 0) zero++;
        // }
        //Basically the palindrome can be formed by using even no. of ball or one odd and odd length
        // if(odd == 0 || odd == 1 || (odd == 3 && (zero == 0 || clr[3] == 0)) || odd == 4) out("Yes");
        // else out("No");

        //Alternative:
        /*If there are less than or equal to one odd number in r,g,b,w, then you can order them to be a palindrome.
        Otherwise, do the operation once (if you can) and check the condition above.It is meaningless to do operation more than once because we only care about the parity of r, b, w, g
.*/
        ll r,g,b,w;
        cin >> r >> g >> b >> w;
        if(check(r,g,b,w)) out("Yes");
        else if(r > 0 && g > 0 && b > 0 && check(r - 1,g - 1,b - 1, w + 3)) out("Yes");
        else out("No");
    }
    return 0;
}
