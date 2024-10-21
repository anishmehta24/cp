#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
#include <numeric>
const int MOD = 1e9+7;
const int N = 1e3+5;
#define ll long long int
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        vector <ll> a(n);
        vector <ll> b(n);
        map<ll,ll> freq;
        ll j=0;
        for(ll i=0;i<n;i++) {
            cin >> a[i];
            if(a[i]%2!=0) {
                freq[a[i]] = i+1;
                b[j] = a[i];
                j++;
            }
        }

        sort(b.rbegin(),b.rend());
        ll l=-1,r=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            if(i+1 < n && gcd(b[i],b[j]) == 1) {
                l=b[i];
                r=b[j];
                break;
            }
        }
        if(l!=-1&&r!=-1)
        cout <<  freq[l] + freq[r] << endl;
        else cout << -1 << endl;
    }
}