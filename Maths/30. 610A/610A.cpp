#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll len;
    cin >> len;
    if(len % 2 == 0){
       ll max = (len - 2) / 2;
      //For rectangle two pair of sides must be equal but must be not equal to one another;
      //For len = 20 : Four ways to divide the stick in the second sample are {1, 1, 9, 9}, {2, 2, 8, 8}, {3, 3, 7, 7} and {4, 4, 6, 6}. Note that {5, 5, 5, 5} doesn't work.
       (max % 2 == 0) ? cout << max / 2 << endl : cout << (max - 1) / 2 << endl; 
    }
    else cout << 0 << endl;
    return 0;
}
