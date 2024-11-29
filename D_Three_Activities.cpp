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

vector<int> solve(vector<ll> a){
   int m1 = -1, m2 = -1, m3 = -1;
    for (int i = 0; i < a.size(); i++) {
        if (m1 == -1 || a[i] > a[m1]) {
            m3 = m2;
            m2 = m1;
            m1 = i;
        } else if (m2 == -1 || a[i] > a[m2]) {
            m3 = m2;
            m2 = i;
        } else if (m3 == -1 || a[i] > a[m3]) {
            m3 = i;
        }
    }
    return {m1, m2, m3};
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        vector<ll> c(n);

        ll max1=0,max2=0,max3=0;
        int j1=0,j2=0,j3=0;
    
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        for(int i=0;i<n;i++) cin >> c[i];
        
       vector <int> a1 = solve(a);
       vector <int> b1 = solve(b);
       vector <int> c1 = solve(c);
       ll ans=0;
       for (int i = 0; i < a1.size(); i++) {
            int x = a1[i];
            for (int j = 0; j < b1.size(); j++) {
                int y = b1[j];
                for (int k = 0; k < c1.size(); k++) {
                    int z = c1[k];
                    if (x != y && x != z && y != z) {
                        ans = max(ans, a[x] + b[y] + c[z]);
                    }
                }
            }
        }

       cout << ans << endl;
    }
}