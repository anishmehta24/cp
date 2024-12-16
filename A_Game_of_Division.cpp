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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        int c=0;
        for(auto &i:a) cin >> i;
        for(int i=0;i<n;i++){
            bool flag = true;
            for(int j=0;j<n;j++){
                if(i!=j && abs(a[i]-a[j]) % k==0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << "YES" << endl;
                cout << (i+1) << endl;
                c=1;
                break;
            }
        }
        if(c==0) cout << "NO" << endl;
    }
}