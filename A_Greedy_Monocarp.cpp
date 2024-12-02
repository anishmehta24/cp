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
        vector<ll> arr(n);
        ll maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]>maxi) maxi=arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        ll s=0;
        // int i=0;
        // while(i<n && s<k){
        //     s+=arr[i++];
        // }
        // if(s<k) cout << k-s << endl;
        int c=-1;
        for(int i=0;i<n;i++) {
            s+=arr[i];
            if(s>k){
                s-=arr[i];
                cout << k - s << endl;
                c=0;
                break;
            }
        }
        if(c==-1)
        cout << k - s << endl;
        

    }
}