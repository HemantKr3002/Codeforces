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
        //as first half would always be even so second half must also be even 
        //sum of even numbers of odd == even 
        if(n % 4) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(int i = 0; i < n / 2; i++) cout << (i + 1) * 2 << " ";
            for(int i = 0; i < n / 2 - 1; i++) cout << (i + 1) * 2 - 1 << " ";
            cout << n + (n / 2) - 1 << endl;
        }
    }
    return 0;
}
