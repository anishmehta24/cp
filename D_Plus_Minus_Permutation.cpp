#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,x,y;
        cin >> n >> x >> y;
        ll cx=0,cy=0;
        cx=n/x;
        cy=n/y;
        ll lm= (x*y)/gcd(x,y);
        ll c = n/lm;
        cx-=c;
        cy-=c;
        ll sy = (cy*(cy+1))/2ll;
        ll sx = (n*(n+1))/2ll -((n-cx)*(n-cx+1)/2ll);
        cout << (sx-sy) << endl;
    }
}