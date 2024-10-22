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
    
        ll n,q;
        cin >> n >> q;
        vector<int>  a(n);
        vector<int>  b(q);

        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<q;i++) cin >> b[i];

        // map <ll,ll> freq;
        // for(int i=n-1;i>=0;i--){
        //     freq[a[i]]=i+1;
        // }

        for(int i=0;i<q;i++){
           auto ind = find(a.begin(),a.end(),b[i]);
           int x = distance(a.begin(),ind);
           cout << x+1 << " ";
           rotate(a.begin(),a.begin()+x,a.begin()+x+1);
        }
        cout << endl;
}
 