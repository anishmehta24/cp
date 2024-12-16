#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <cstring>
#include <algorithm>
#include <queue>
#define ll long long int
const ll MOD = 1e9+7;
using namespace std;


int main() {
    int n, k , q;
    cin >> n >> k >> q;
    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(q);
    int mini=INT_MAX;
    int maxi=0;
    for(int i=0;i<n;i++) {
        cin >> a[i].first;
        cin >> a[i].second;
        mini = min(mini, min(a[i].first,a[i].second));
        maxi = max(maxi, max(a[i].first,a[i].second));
    }
    for(int i=0;i<q;i++) {
        cin >> b[i].first;
        cin >> b[i].second;
        mini = min(mini, min(b[i].first,b[i].second));
        maxi = max(maxi, max(b[i].first,b[i].second));
    }

    vector<int> arr(maxi-mini+1,0);
    for(int i=0;i<n;i++) {
        arr[a[i].first -mini ] += 1;
        arr[a[i].second -mini +1] += -1;
    }

    for(int i=0;i<maxi-mini;i++) {
        arr[i+1]+=arr[i];
        // cout << arr[i] << endl;
    }

    vector<int> binArr(maxi-mini+2,0);
    for (int i = 0; i < maxi-mini+2; i++) {
        binArr[i] = (arr[i] >= k) ? 1 : 0;
    }

    vector<int> prefixSum(maxi-mini + 2, 0);
    prefixSum[0]=binArr[0];
    for (int i = 1; i <= maxi-mini+1; i++) {
        prefixSum[i] = prefixSum[i - 1] + binArr[i - 1];
    }


    for (int i = 0; i < q; i++) {
        int l = b[i].first - mini; 
        int r = b[i].second - mini;

        cout << prefixSum[r + 1] - prefixSum[l] << endl;
    }

}