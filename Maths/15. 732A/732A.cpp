#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
   int k,r;
    cin >> k >> r;
    int last = k % 10;
    for(int i = 1; i <= 10; i++){
        int curr = last * i;
        //make the unit place equal to 0 or r
        if(curr % 10 == r || curr % 10 == 0){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
