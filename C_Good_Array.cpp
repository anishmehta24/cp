#include <bits/stdc++.h>
#define int long long 
const int MOD = 1e9 + 7;
using namespace std;


int getLargestOutlier(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    if(nums[0] == 0 && nums[nums.size()-1]==0) return INT_MIN;
    int s = 0; 
    int n = nums.size();
    int ans = INT_MIN;
    for(int i = 0;i<n;i++){
        s+=nums[i];
    }
    for(int i = 0;i<n;i++){
        int x = s-(2*nums[i]); 
        int lo = i+1,hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid] == x ) {if(x>ans) ans = x; break;}
            else if(nums[mid] > x) hi = mid-1;
            else lo = mid+1;
        }
        lo = 0;hi = i-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid] == x ) {if(x>ans) ans = x; break;}
            else if(nums[mid] > x) hi = mid-1;
            else lo = mid+1;
        }
    }
    return ans;
}

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for(auto &it:a) cin >> it;
    
    vector<int> ans;
    while(true){
        int x = getLargestOutlier(a);
       
        if(x == INT_MIN) break;
        for(int i=0;i<n;i++) {
            if(a[i] == x) {
                ans.push_back(i+1);
                a[i]=0;
                break;
            }
        }

    }
    cout << ans.size() << endl;
    for(auto it:ans) cout << it << " ";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
}




