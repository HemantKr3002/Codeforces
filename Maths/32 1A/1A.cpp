#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll m,n,a;
    cin >> m >> n >> a;
    //maximum no. of square paved would be = how many time we can divide with in side length a and same goes for length
    //there might left some space as we can't break the squares we must take one more in case there left some space
    cout << ((m + a - 1) / a) * ((n + a - 1) / a) << endl;
    return 0;
}
