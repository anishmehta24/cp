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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m);
        vector<int> q(k);
        for (auto &i : a) cin >> i;
        for (auto &i : q) cin >> i;

        if (k == n) {
            for (int i=0; i<m;i++) cout << 1;
            cout << endl;
        } else if (k == n - 1) {
            int p = 1;
            for (auto x : q) {
                if (x == p) {
                    p++;
                } else {
                    break;
                }
            }
            if (p > n) {
                p = n;
            }
            string res;
            for (int i = 0; i < m; i++) {
                if (a[i] == p) {
                    res += '1';
                }
                else res+='0';
            }
            cout << res << endl;
        } else {
            for (int i = 0; i < m; i++) cout << '0';
            cout << endl;
        }
    }
}
