#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while(t--){
        ll c,sum;
        cin >> c >> sum;
        //The heating can have as minimum section as == sum / c
        //and we can make (c - sum % c) raditors of the minimum section by giving each one == sum / c section
        //other (sum % c) would have one more section as the sum of section must be = given sum
        cout << (c - sum % c) * (sum / c) * (sum / c) + (sum / c + 1) * (sum / c + 1) * (sum % c) << endl;
    }
    return 0;
}
