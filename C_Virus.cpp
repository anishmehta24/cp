#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        vector<int> a(m);
        vector<int> diff(m);
        for(auto &i:a) cin >> i;
        sort(a.begin(),a.end());

        diff[0] = (a[0]-1) +(n-a[m-1]); 
        // cout << a[0];
        for(int i=0;i<m-1;i++) {
            diff[i+1] = a[i+1]-a[i]-1;
        }

        sort(diff.rbegin(),diff.rend());
        int ans=0;
        int c=0;
        for(int i=0;i<m;i++) {
            diff[i]-=c;
            if(diff[i]>0) {
                if(diff[i]<=2) {
                    ans++;
                    break;
                }
                else {
                    diff[i]--;
                    ans+=diff[i];
                    c+=4;
                }
            }
        }
        cout << (n-ans) << endl;
        // for(auto &i:diff) cout<< i<< endl;
    }
}