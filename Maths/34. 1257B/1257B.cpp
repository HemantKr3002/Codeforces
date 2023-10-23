#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        //When a number greater than x > 3 it increase with the slope of 1.5
        //But in case x = 2 or x = 3 after operation it stuck in cylce 2->3->2
        if(x >= y || x > 3 || (x == 2 && y == 3)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
