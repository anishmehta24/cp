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
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        int ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (a[i][j] < 0) {
                    int x = -a[i][j];  
                    ans += x;
                    for (int k = 0; k <= min(i, j); k++) {
                        a[i - k][j - k] += x;  
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}