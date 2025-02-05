#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(m+1,INT_MAX);
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        a[x] = min (a[x],y);

    }
    int s=0;
    for(int i=1;i<a.size();i++) {
        s+=a[i];
    }
    cout << min(s,k) << endl;
}