#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int maxi = max(x,max(y,z));
        if((x == maxi && (y == maxi || z == maxi )) || (y == maxi && z == maxi)){
            cout << "YES" << endl;
            int mini = min(x,min(y,z));
            cout << maxi << " " << mini << " " << mini << endl;
        }
        else cout << "NO" << endl;
    }
}
