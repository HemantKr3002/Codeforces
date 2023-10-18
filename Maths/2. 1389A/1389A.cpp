#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        //if there exists l * 2 in the range[l,r] and as the lcm(l,l*2) = l * 2 itself which would be the smallest possible answer
        if(l * 2 <= r) cout << l << " " << l * 2 << endl;
        //if smallest possible answer doesn't exist it implies there is no possible answer
        else cout << -1 << " " << -1 << endl;
    }
    return 0;
}
