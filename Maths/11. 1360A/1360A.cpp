#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int mini = min(a,b) * 2;
        int maxi = max({mini,a,b});
        cout << maxi * maxi << endl;
    }
    return 0;
}
