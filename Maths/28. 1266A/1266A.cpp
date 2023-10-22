#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int even = 0;
        int zero = 0;
        int sum = 0;
        for(auto ch:str){
            int num = ch - '0';
            if(num == 0) zero++;
            if(!(num & 1)) even++;
            sum += num;
        }
        //the number must be divisible by 60 so for that:
        //sum % 3 == 0 even > 1 and zero > 0
        (sum % 3 == 0 && even > 1 && zero > 0) ? cout << "red" << endl : cout << "cyan" << endl;
    }
    return 0;
}
