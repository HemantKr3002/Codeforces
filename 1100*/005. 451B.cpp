#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PLL pair<ll, ll>
#define all(v) v.begin(), v.end()
#define od(n) (n & 1)
#define loop(k) for(ll i = 0; i < k; i++)
#define out(k) cout << k << endl
ll ceil(ll a, ll b) { return (a + b - 1) / b; }
ll pow(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a); a = (a * a); b = b >> 1;   } return res;}
void printv(vector<int>& arr){loop(arr.size()) cout << arr[i] << " ";}

void primeFactor(ll x,map<ll,ll>& mp){
    for(ll j = 2; j * j <= x;j++){
        while(x % j == 0){
            mp[j]++;
             x /= j;
         }
     }
     if(x > 1) mp[x]++;
 }

int main() {
    //=============Sort the array after reversing the array only onces between two indices====================================
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int s = 0,e = 0;
    vector<int> nums(n);
    bool flag = true;
    loop(n){
        cin >> nums[i];
    }
    loop(n){
        //First position where the array start decreasing
        if(i > 0 && nums[i - 1] > nums[i] && s == 0){
            s = i;
        }
        //First position where the array start increasing
        if(i < n - 1 && nums[i] < nums[i + 1] && e <= s){
            e = i + 1;
        }
    }
    if(s == 0 || e < s){
        //If the already in increasing order then s would remain 0
        //If the e didn't update and remain less than e this implies that from s the array is in decreasing order till the end
        if(s == 0 && e == 0) s = e = 1;
        else if(s == 0) s = e;
        else e = n;
    } 
    reverse(nums.begin() + s - 1,nums.begin() + e);
    //After reversing exactly onces check whether it becomes sorted or not
    loop(n){
        if(i > 0 && nums[i - 1] > nums[i]){
            flag = false;
        }
    }
    if(flag){
        out("yes");
        cout << s << " " << e;
    }
    else out("no");
    return 0;
}
