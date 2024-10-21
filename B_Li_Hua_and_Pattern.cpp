#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
const int N = 1e3+5;
#define ll long long int
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<vector<ll>> a;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){ cin >> a[i][j];}
        }
        ll c=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] != a[n-i-1][n-j-1]) c++;
            }
        }
        c=c/2;
        if(c>k) cout << "NO" << endl;
        else if(c==k) cout << "YES" << endl;
        else {
            if((k-c) % 2==0 || n%2!=0) cout << "YES" << endl;
            else  cout << "NO" << endl;
        }
    }
    return 0;
}