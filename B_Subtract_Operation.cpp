#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <string>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        vector <ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        int i=0,j=1;
        bool flag = false;
        while(i<n && j<n){
            if(a[i]+k==a[j]){flag = true;break;}
            else if( a[i]+k < a[j]) i++;
            else j++;
        }
        if(flag) cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
}