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
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        // sort(a.rbegin(),a.rend());
         ll s=0;
        vector<ll> ans(n+1);
        vector <ll> temp(n);
        for(int i=0;i<n;i++) {
           ans[i]=max(a[i],b[i]);
           temp[i]=min(a[i],b[i]);
        }
        sort(temp.rbegin(),temp.rend());
        ans[n]=temp[0];
        for(int i=0;i<n+1;i++) {
            s+=ans[i];
        }
        cout << s << endl;
    }

}