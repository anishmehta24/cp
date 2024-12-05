#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

ll solve(ll a,ll b) {
    if(a<b) swap(a,b);
    if(b==0) return 0;
    return a/b + solve(b,a%b);
}

int main() {
   ll a,b;
   cin >> a >> b;
   cout << solve(a,b) << endl;
}