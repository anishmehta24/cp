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


int main(){
    ll n;
    cin >> n;
    vector<ll> x(n);
    for(auto &v:x) cin >> v;
    sort(x.begin(),x.end());
    ll q;
    cin>>q;  
    vector<ll> m(q);
    for(auto &v:m) cin >> v;
    for(auto v:m) {
        if(v>100000) cout << n << endl;
        else{
            int i=-1;
            int low=0,high=n-1;
            while(low<=high){
                int mid = low +(high-low)/2;
                if(v>=x[mid]){
                    i = mid;
                    low = mid+1;
                }
                else 
                    high = mid-1;
            }
            cout << i+1 << endl;
        }
    }
}