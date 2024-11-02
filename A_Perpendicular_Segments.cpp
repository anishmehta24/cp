#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--) {
        int x,y,k;
        cin >> x >> y >> k;
        int mn = min(x,y);
        
        cout << 0 << " " << 0 << " " << mn << " " << mn << endl;
        cout << 0 << " " << x << " " << x << " " << 0 << endl;
        
    }
}