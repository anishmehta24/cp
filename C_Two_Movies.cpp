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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(auto &i:a) cin >> i;
        for(auto &i:b) cin >> i;

        ll sa=0,sb=0;
        int neg=0,pos=0;

        for(int i=0;i<n;i++) {
            if(a[i]>b[i]) sa+=a[i];
            else if(b[i]>a[i]) sb += b[i];
            else {
                if(a[i]==1) {
                     pos++;
                }
                else if (a[i]==-1) neg++;
            }
        }
            ll ans = -1e9;
        for (int i = -neg; i <= pos; i++)
        ans = max(ans, min(sa + i, sb + (pos - neg - i)));
        cout << ans << endl;
    }
}