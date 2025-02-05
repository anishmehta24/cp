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
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
     int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        set<ll> s;
        map<ll ,int> mp;
        for(int i=0;i<n;i++) {
            mp[a[i]]++;
        }
        ll x = n-2;
        double y=0,z=0;
        for(int i=0;i<n;i++) {
            if(x>=a[i]){
                int m = x/a[i];
                y = (double) x/a[i];
                if(y==m){
                    mp[a[i]]--;
                    //  cout << y  << endl;
                    if(mp[y]>0){
                        z = a[i];
                        break;
                    }
                }
            }
        }
        cout << y << " " << z << endl;
    }
}