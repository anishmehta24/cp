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

    while (t--) {
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for( auto &i : a) cin >> i;
        for( auto &i : b) cin >> i;

        sort(b.begin(),b.end());
        set<int> s;
        for(int i=0;i<n;i++) {
            s.insert(a[i]);
        }

        int x = s.size();
        vector<int> temp;
        for(auto it:s) {
            temp.push_back(it);
        }

        int kevin = a[0];

        sort(temp.rbegin(),temp.rend());

        
    }
}
