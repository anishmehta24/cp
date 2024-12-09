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
    ll t;
    cin >> t;
    while(t--) {
     ll n , m;
     cin >> n >> m;
     ll x=0;
     int c=0;int k=0;
     for(int i=0;i<n;i++) {
        string s;
        cin >> s;
       
        if(k==0 && (x+s.size())<=m) {x+=s.size();c++;}
        else k=1;
     }
     cout << c << endl;
    }
}