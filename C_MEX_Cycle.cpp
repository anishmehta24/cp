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

        int n, x, y;
        cin >> n >> x >> y;
        
        vector<int> ans(n, -1);
        vector<set<int>> friends(n);

        for (int i = 0; i < n; i++) {
            friends[i].insert((i+1) %n);
            friends[i].insert((n+i-1) % n);
        }
        friends[x-1].insert(y-1);
        friends[y-1].insert(x-1);

        for (int i=0;i<n;i++) {
            set<int> s;
            for (auto it : friends[i]) {
                if (ans[it] != -1) {
                    s.insert(ans[it]);
                }
            }
            int z=0;
            while (s.find(z) != s.end()) {
                z++;
            }
            ans[i] = z;
        }

        for (auto i:ans) {
                cout << i << " ";
        }
        cout << endl;
    
    }

}