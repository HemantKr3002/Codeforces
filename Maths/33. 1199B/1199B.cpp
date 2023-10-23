#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    double h,l;
    cin >> h >> l;
    //Over moving the flower the length of its stem remains same
    cout << setprecision(13) <<  (l * l - h * h) / (2 * h) << endl;
    return 0;
}
