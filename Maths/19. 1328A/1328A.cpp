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
        (a % b) ? cout << b - a % b << endl : cout << 0 << endl;
    }
    return 0;
}
