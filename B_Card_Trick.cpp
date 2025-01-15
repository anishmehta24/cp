#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cstring>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;

int main() {
    int t;cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        int m;
        cin >> m;
        vector<int> b(m) ;
        ll s=0;
        for(auto &i:b) {cin >> i;
        s+=i;
        }
        cout << (a[s%n]) << endl;
    } 
}