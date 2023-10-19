#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int x;
    cin >> x;
    (x % 5) ? cout << x / 5 + 1 << endl : cout << x / 5 << endl;
    return 0;
}
