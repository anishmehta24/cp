#include <bits/stdc++.h>
#define ll long long int
const ll MOD = 1e9 + 7;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(auto &i:a) cin >> i;
        for(auto &i:b) cin >> i;
        
        set<int> s1;
        set<int> s2;
        for(int i=0;i<n;i++) s1.insert(a[i]);
        for(int i=0;i<n;i++) s2.insert(b[i]);
        if(s1.size()>=2 && s2.size() >= 2) cout << "YES" << endl;
        else if(s1.size()==1 && s2.size()>2) cout << "YES"<< endl;
        else if(s2.size()==1 && s1.size()>2) cout << "YES"<< endl;
        else cout << "NO" << endl;
        

    }
}