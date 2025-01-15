#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <iomanip>
#include <math.h>
#include <string>
#include <numeric>
#include <cstring>
#include <algorithm>
#include <queue>
#define ll long long int
const int MOD = 1e9+7;
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        set<int> present;
        int maxi = INT_MIN;
        for(auto &i:a) {cin >> i;maxi = max(i,maxi);present.insert(i);}
        vector<int> ntprsnt;
        for(int i=1;i<=n;i++) {
            if(present.find(i)==present.end()){
                ntprsnt.push_back(i);
            }
        }
        
        vector<int> ans(n);
        set<int> s;
        int k=0;
        for(int i=0;i<n;i++) {
            if(s.find(a[i])==s.end()){
                ans[i] = a[i] ;
                s.insert(a[i]);
            }
            else{
                ans[i] = ntprsnt[k++];
            }
        }
        for(int i=0;i<n;i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}


