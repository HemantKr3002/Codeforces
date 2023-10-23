#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    string num;
    cin >> num;
    ll one = 0;
    for(auto ch:num)
        if(ch == '1') one++;
    //as the binary representation is given so every even passed bit would a train 
    (one > 1) ? cout << (num.length() / 2) + 1 << endl : 
        cout << (num.length() / 2) << endl;
    return 0;
}
