#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        cout << (m / 2) * n + (m % 2) * (n / 2) + (m % 2) * (n % 2) << endl;
    }
}
