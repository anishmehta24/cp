#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        ll s=0;
        int c=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
            double x = sqrt(s);
            ll y = sqrt(s);
            if(x==y){
            if(y%2 !=0) c++;
            }
        }
        cout << c << endl; 
    }
}