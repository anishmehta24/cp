#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int

using namespace std;


int main() {
    ll n,d;
    cin >> n >> d;
    vector <ll> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

      sort(arr.rbegin(),arr.rend());
      int c=0;
      ll k = n;
    for(int i=0;i<n;i++){
        ll x = d/arr[i] + 1 ;

        if(x<=k){
            k-=x;
            c++;
        }
        else break;
    }

  
    // ll s=0;
    
    // for(int i=0;i<n;i++){
    //     if(s+arr2[i]>n) break;
    //     else{
    //         s+=arr2[i];
    //         c++;
    //     }
    // }

    cout << c << endl;
    
    return 0;
}