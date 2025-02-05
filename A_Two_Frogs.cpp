#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cstring>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, a,b;
        cin >> n >> a >> b;

        ll x = abs(a-b);

        if(x%2==0) cout << "YES" << endl;
        else cout << "NO" << endl;
       
    }
}