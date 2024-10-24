#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <set>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        set<ll> pref;
        ll psum = 0;
        int beautiful = 0;
        
        pref.insert(0); 
        
        for (int i = 0; i < n; ++i) {
            psum += a[i];
            
            if (pref.count(psum)) {
                beautiful++;
                pref.clear();
                psum = 0;
                pref.insert(0);
            } else {
                pref.insert(psum);
            }
        }
        
        cout << beautiful << endl;
    }
    
    return 0;
}
