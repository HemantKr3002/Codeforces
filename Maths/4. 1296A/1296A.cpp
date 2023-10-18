#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int odd = 0,even = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] & 1) odd++;
            else even++;
        }
        //1st case sare even hai toh replacement se koi farak nhi padega toh answer no ayega
        if(even == n) cout << "NO" << endl;
        //2nd case some or all odd with odd length isme yes ayeg
        else if(odd <= n && n & 1) cout << "YES" << endl;
        //3rd case all odd with even length isme no ayega
        else if(odd == n && !(n & 1)) cout << "NO" << endl;
        //4th case some odd with even length then print yes
        else cout << "YES" << endl;
    }
}
