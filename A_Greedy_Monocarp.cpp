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
    int t;
    cin >> t;
    while(t--) {
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        ll maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]>maxi) maxi=a[i];
        }
        sort(a.rbegin(),a.rend());
        ll s=0;
        // int i=0;
        // while(i<n && s<k){
        //     s+=a[i++];
        // }
        // if(s<k) cout << k-s << endl;
        int c=-1;
        for(int i=0;i<n;i++) {
            s+=a[i];
            if(s>k){
                s-=a[i];
                cout << k - s << endl;
                c=0;
                break;
            }
        }
        if(c==-1)
        cout << k - s << endl;
        

    }
}