#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,m,k;
        cin >> n >> m >> k;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(),arr.end());
        long long ans = arr[n - 1] * (m / (k + 1)) * k + arr[n - 2] * (m / (k + 1));
        if(m % (k + 1)){
            ans += arr[n - 1] * (m % (k + 1));
        }
        cout << ans << endl;
    return 0;
}
