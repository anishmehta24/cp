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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int l=0,r=1;
    int s= a[0],c=0;
    while(r<n) {
        if(s==a[r]){
            s+=a[r];
        }
        else{
            c++;
            s=a[r];
            l=r;
        }
        r++;
    }
    if(l<n-1){
        c++;
    }
    if(c==n-1){
        set<int> s;
        for(int i=0;i<n;i++) {
            s.insert(a[i]);
        }
        cout << s.size() <<endl;
    }
    else 
    cout << c<< endl;
}