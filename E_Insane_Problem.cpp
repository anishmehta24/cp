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
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int ans = 0;
    for (int n = 0; n <= 32; n++) {
        if (pow(k,n) > r2)
            break;
        int mini = r2 / pow(k,n);
        int maxi = (l2 + pow(k,n) - 1) / pow(k,n);
        if (min(mini, r1) >= max(maxi, l1))
            ans += min(mini, r1) - max(maxi, l1) + 1;
        if (pow(k,n) > r2)
            break;
    }
    cout << ans << endl;
    }
}


