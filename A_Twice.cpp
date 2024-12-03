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
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        map<ll,int> mp;
        for(int i=0;i<n;i++) {
            mp[arr[i]]++;
        }
        int c=0;
        for(auto i :mp){
            if(i.second>1) {
                c+=i.second/2;
            }
        }
        cout << c << endl;
        
    }
}