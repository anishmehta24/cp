#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <iomanip>
#include <math.h>
#include <string>
#include <numeric>
#include <cstring>
#include <algorithm>
#include <queue>
#define ll long long int
const int MOD = 1e9+7;
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--) {
       int m,a,b,c;
       cin >> m >> a >> b >> c;
       int x = m,y=m;
       int a1 = min(a,x);
       int b1 = min(b,y);
       int a2 = m-a1;
       int b2 = m-b1;

       int ans = a1+b1+min(c,a2+b2);
       cout << ans << endl;
    }
}
