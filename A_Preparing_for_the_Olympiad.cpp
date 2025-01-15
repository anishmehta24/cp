#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 998244353;
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(auto &i:a) cin >> i;
        for(auto &i:b) cin >> i;

        int ans = a[n-1];

        for(int i=0;i<n-1;i++) {
            if(a[i]-b[i+1]>0) {
                ans+=(a[i]-b[i+1]);
            }
        }

        cout << ans << endl;
    }
}