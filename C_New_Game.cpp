#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        sort(a.begin(), a.end());

        int ans = 0;
        int l = 0,r=0;
        map<int, int> freq;  
        int dist = 0;

       while(r<n) {
            if (freq[a[r]] == 0) {
                dist++; 
            }
            freq[a[r]]++;

            while (dist > k || (freq.size() > k)) {
                freq[a[l]]--;
                if (freq[a[l]] == 0) {
                    dist--; 
                    freq.erase(a[l]); 
                }
                l++;  
            }

            if (r > 0 && a[r] > a[r - 1] + 1) {  
                l = r; 
                dist = 0; 
                freq.clear(); 
                freq[a[r]]++;
                dist = 1;
            }

            ans = max(ans, r - l + 1);
            r++;
        }

        cout << ans << endl;
    }

    return 0;
}
