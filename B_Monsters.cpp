#include <iostream>
#include <vector>
#include <utility> 
#include <algorithm>
#define ll long long int

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
 
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
 
    vector<pair<ll, ll>> hMap;
 
    for (int i = 0; i < n; i++)
    {
        ll res = a[i] % k;
        if (res == 0)
            res += k;
        hMap.push_back({-res, i});
    }
 
    sort(hMap.begin(), hMap.end());
    for (auto ele : hMap)
        cout << ele.second + 1 << " ";
 
}
 
int main()
{
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
        cout<<" "<<endl;
    }
 
}
