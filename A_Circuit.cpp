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

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(2*n);
        int c0=0,c1=0;
        for(int i=0;i<2*n;i++){
            cin >> a[i];
            if(a[i]==1)c1++;
            else c0++;
        }
        int x = min(c0,c1);
        cout << c0%2 << " " << x << endl;

    }
}