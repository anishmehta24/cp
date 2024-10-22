#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n + 1);
        bool flag = true;

        for (int i = 1; i <= n; i++) {
            a[i] = ((l - 1) / i + 1) * i;
            if (a[i] > r) {
                flag = false;
            }
        }

        if (flag) {
            cout << "YES" << endl;
            for (int i = 1; i <= n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        } 
        else cout << "NO" << endl;
    }

    return 0;
}