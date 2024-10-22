#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll ans;
        ll i=1,j=1;
        ans=(((((n*(n+1))%MOD)*(4*n-1))%MOD*2022/6)%MOD); 
        
        cout << ans<< endl;
    }

    // 1 + 4 + 9 + 16 + ... + ->  0 + 2 + 6 + 12 + 20 ... 
   
}