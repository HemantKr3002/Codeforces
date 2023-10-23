#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define od(n) (n & 1)
#define loop(k) for(ll i = 0; i < k; i++)
#define out(k) cout << k << endl
 
 
int main() {
    ll x,y,s;
    cin >> x >> y >> s;
    //mini is the minimum number of step to reach the destination
    ll mini = abs(x) + abs(y);
    //if the step is less or the diff of (s - mini) is odd then it is impossible to reach the destination
    if(s < mini || (s > mini && od(s - mini))) out("No");
    else out("Yes");
    return 0;
}
