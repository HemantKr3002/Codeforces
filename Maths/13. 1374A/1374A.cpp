#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y,n;
        cin >> x >> y >> n;
        //Reducing n by y to and subtrate the remainder of n - y % x which helps in finding the highest multiple of x with rem y
        cout << n - (n - y) % x << endl;
    }
    return 0;
