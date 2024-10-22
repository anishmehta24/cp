#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include <map>
using namespace std;



int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]] = i + 1;
        }

        int maxSum = -1;

        for (int i = 1; i <= 1000; i++) {
            if (mp.find(i) == mp.end()) continue;
            for (int j = i; j <= 1000; j++) {
                if (mp.find(j) == mp.end()) continue;
                if (gcd(i, j) == 1) {
                    maxSum = max(maxSum, mp[i] + mp[j]);
                }
            }
        }

        cout << maxSum << endl;
    }

    return 0;
}
