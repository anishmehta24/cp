#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 998244353;
#define ll long long int
using namespace std;


int main() {
    
    int t;
    cin >> t;
    while(t--) {
        ll l, r, G;
        cin >> l >> r >> G;
  
        ll start = (l + G - 1) / G; 
        ll end = r/G;            

        bool flag=false;
        if (start > end) {
            cout << -1 << " " << -1 << endl;
        }
        else{
            ll ans1 = -1, ans2 = -1;
            ll maxD = -1; 
            for (ll a = start; a <= min(end, start + 50); a++) { 
            for (ll b = end; b >= max(start, end - 50); b--) { 
                    if (gcd(a, b) == 1) {    
                        ll A = a * G;
                        ll B = b * G;
                      
                        if (A >= l && B <= r) {
                            if (abs(A - B)>maxD) {
                                maxD = abs(A - B);
                                ans1 = A;
                                ans2 = B;
                            } else if (abs(A - B) == maxD) {
                                if (A < ans1) { 
                                    ans1 = A;
                                    ans2 = B;
                                }
                            }
                        }
                    }
                }
            }

        cout << ans1 << " " << ans2 << endl;

        }


       
    }

}
