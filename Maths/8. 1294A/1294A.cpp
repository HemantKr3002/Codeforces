#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,n;
        cin >> a >> b >> c >> n;
        //Approach 1:
        // long long total = a + b + c + n;
        // int maxi = max({a,b,c});
        // int mini = min({a,b,c});
        // if(total % 3 == 0 && total / 3 > maxi) cout << "YES" << endl;
        // else if(total % 3 == 0 && total / 3 == maxi){
        //     if((a == b || a == c) && a == maxi){
        //         if(n == maxi - mini) cout << "YES" << endl;
        //         else cout << "NO" << endl;
        //     }
        //     else if(b == c && b == maxi){
        //         if(n == maxi - mini) cout << "YES" << endl;
        //         else cout << "NO" << endl;
        //     }
        //     else{
        //         if((total - maxi) % 2 == 0) cout << "YES" << endl;
        //         else cout << "NO" << endl;
        //     }
        // }
        // else cout << "NO" << endl;

        //Approach 2:
        int sum = (a+b+c+n);
        if(sum  % 3 != 0 || sum/3<a || sum/3<b || sum/3<c) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
