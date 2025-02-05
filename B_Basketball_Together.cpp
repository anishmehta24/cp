#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int

using namespace std;


int main() {
    ll n,d;
    cin >> n >> d;
    vector <ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

      sort(a.rbegin(),a.rend());
      int c=0;
      ll k = n;
    for(int i=0;i<n;i++){
        ll x = d/a[i] + 1 ;

        if(x<=k){
            k-=x;
            c++;
        }
        else break;
    }

  
    // ll s=0;
    
    // for(int i=0;i<n;i++){
    //     if(s+a2[i]>n) break;
    //     else{
    //         s+=a2[i];
    //         c++;
    //     }
    // }

    cout << c << endl;
    
    return 0;
}