#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        n -= 2;
        if(n <= 0) cout << 1 << endl;
        else{
            if(n % x) cout << n / x + 2 << endl;
            else cout << n / x + 1 << endl;
        }
    }
}
