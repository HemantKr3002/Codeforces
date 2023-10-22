#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while(t--){
        ll k,x;
        cin >> k >> x;
        //The digital root remains same on adding 9 to the number as we need to find
        //kth number having digital root x it would me (k - 1)th multiple of 9
        //As 1st number having digital root == x is x itself
        cout << x + 9*(k - 1) << endl;
    }
    return 0;
}
