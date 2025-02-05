#include <iostream>
#include <vector>
#include <utility> 
#include <algorithm>
#define ll long long int

using namespace std;

 
int main()
{
    ll t ;
    cin >> t;
    while (t--) 
    {
       ll  n,k,q;
       cin >> n >> k >> q;
       vector<ll> a(n);
       for(int i=0;i<n;i++){
        cin >> a[i];
       }

       ll ans = 0,length=0;

       ll l=0,r=0,i=0;
       while(l<=n ){
        if(a[r]<=q){
             r++;
            // if(r-l>=k){
            //     i++;
            //     ans+=i;
            // }
            length++;
        }
        else{
            l=r+1;  
            r++;
            if (length >= k) {
                ans += (length - k + 1) * (length - k + 2) / 2;
            }
            length = 0;
        }
       }
        if (length >= k) {  
            ans += (length - k + 1) * (length - k + 2) / 2;
        }
       cout<<ans<<endl;
    }
 
}
