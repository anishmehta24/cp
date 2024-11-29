#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 1e9+7;
#define ll long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int l=0,r=1;
    set<int> s;
    s.insert(arr[0]);
    vector<int> ans;
    int c=0;
    while(r<n) {
        if(s.find(arr[r]) != s.end()){
            c++;
            ans.push_back(l+1);
            ans.push_back(r+1);
            s.clear();
            l=r+1;
        }
        else s.insert(arr[r]);
        r++;
    }
    if(c>0) {
        cout << c << endl;
        int x=ans.size();
        // cout << x;
        if(ans[x-1]<n){
            ans[x-1]=n;
        }
       
        for(int i=0;i<x;i++) {
            cout << ans[i] << " ";
            if(i%2!=0) cout << endl;
        }
    }
    else cout << -1 << endl;
}