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
        int swap = 0,count = 0;
        //count the no. of possible swap
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(!(arr[i] & 1) && i & 1) {
                swap++;
                count++;
            }
            else if(arr[i] & 1 && !(i & 1)) swap--;
        }
        //if swap is valid
        if(swap == 0) cout << count << endl;
        else cout << -1 << endl;
    }
    return 0;
}
