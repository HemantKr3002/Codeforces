#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        //assuming the sides to be lower-limts
        int x = a;
        int y = b;
        int z = c;
        //if selected sides doesn't holds the triangle inequality then change the sides
        if(x + y <= z){
            //Diff stores the minimum length to be added to make the inequality holds true
            int diff = z - (x + y) + 1;
            //Is it possible to make the x in that way to make the inequality holds true
            if(x + diff <= b) x += diff;
            //if not make the x upper-limit and add the remaining in the b
            else{
                x = b;
                int rem = diff - (b - x);
                y += rem;
            }
        }
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
