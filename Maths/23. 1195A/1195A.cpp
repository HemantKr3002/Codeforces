#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,k;
    cin >> n >> k;
    vector<int> mp(k + 1);
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    //NO. of drinks can be taken which is ceiling of( n / 2)
    int count = (n % 2) ? n / 2 + 1 : n / 2;
    int ans = 0;
    for(int i = 1; i <= k; i++){
        //Now take the half of all the drink number
        int hf = mp[i] / 2;
        //No. of student it can satisfy
        ans += hf * 2;
        //now we will have to choose n - hf
        count -= hf;
    }
    //count would left with the no. of drink left to choose as count * 2 > n being ceiling
    cout << ans + count << endl;
    return 0;
}
