#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll x,y,z;
    cin >> x >> y >> z;
    //If excange can buy one more coconut then find the min exchange possible
    ll ex = (x % z + y % z >= z) ? min(z - x % z,z - y % z) : 0;
    //Total coconot would be (x + y) / z
    cout << (x + y) / z << " " << ex;
    return 0;
}
