#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long i = 2,j = 0;
        long long arr[3];
        for(; i * i < n; i++){
            if(n % i == 0){
                n /= i;
                arr[j++] = i;
                if(j == 2) break;
            }
        }
        if(j == 2 && n >= i){
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[1] << " " << n << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
