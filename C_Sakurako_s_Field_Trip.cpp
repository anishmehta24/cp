#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int countDisturbances(vector<int> a){
    int n = a.size();
    int l=0,r=1;
    int c=1;
    int mx=0;
    while(r<n){
        if(a[l]==a[r]) {
            c++;
            r++;
        }
        else{
            mx = max(c,mx);
            c=1;
            l=r;
            r=l+1;
        }
    }
    return mx;
}
 
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int c = countDisturbances(a);
        int ans = c;

        for (int i = 0; i < n / 2; i++) {
            swap(a[i], a[n - i - 1]);
            c = countDisturbances(a);
            ans = min(ans, c);
            swap(a[i], a[n - i - 1]); 
        }

        for (int i = 0; i < n / 2; i++) {
            swap(a[i], a[n - i - 1]);
            c = countDisturbances(a);
            ans = min(ans, c);
        }

        cout <<ans<< endl;
    }

}