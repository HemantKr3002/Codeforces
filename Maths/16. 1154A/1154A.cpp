#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int maxi = max({a,b,c,d});
    maxi - a == 0 ? cout << maxi - b << " " << maxi - c << " " << maxi - d :
    maxi - b == 0 ? cout << maxi - a << " " << maxi - c << " " << maxi - d :
    maxi - c == 0 ? cout << maxi - b << " " << maxi - a << " " << maxi - d :
    cout << maxi - a << " " << maxi - b << " " << maxi - c;
    return 0;
}
