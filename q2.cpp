#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;

void solve() {
   string s;
   cin >> s ;
   int k; cin >> k;
   int n = s.size();
   vector<int> ans(n,0);
   int j=0;
   for(int i=0;i<n;i++) {
        int d = (int)s[i]-'0';
        // cout << d;
        while(j>0 && k>0 && ans[j-1]>d){
            j--;
            k--;
        }
        ans[j] =d;
        j++;
   }
   j-=k;
   int c0=0;
   while(c0<j && ans[c0]==0) c0++;

   if(c0==j ) cout << 0;
   else{
    for(int i=c0;i<j;i++) cout << ans[i];
   }
   cout << endl;

}

int main() {
    // int t;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
    return 0;
}
