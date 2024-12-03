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

vector<ll> solve(vector<ll> arr,int n){
    int l=0,r=0;
    for(int i=0;i<n;i++) {
            if(i<n && arr[i]<=arr[i+1]) continue;
            else{
                l=i;
                while(i<n && arr[i]>=arr[i+1]){
                    i++;
                }
                r=i;
            }
        }
        for(int i=l;i<r;i++){
            arr[i]+=1;
        }
        return arr;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >>n;
        vector<ll> arr(n);
        vector<ll> b(n);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            // b[i]=arr[i];
        }
        
       b = solve(arr,n);
       arr = solve(arr,n);
         sort(arr.begin(),arr.end());
         for(int i=0;i<n;i++) {
            if(b[i]!=arr[i]) {
                b=solve(arr,n);
                arr=solve(arr,n);
                i=0;
                sort(arr.begin(),arr.end());
            }
        }

    //     sort(b.begin(),b.end());
    //    int i=0;
    //    while(arr[i]==b[i]){
    //     i++;
    //    }
    // //    cout << i;
    //     int x = b[i];
    //     int index=0;
    //     for(int j=i;j<n;j++){
    //         if(arr[j]==x){
    //             index=j;
    //             break;
    //         }
    //     }
    //     int c=0;
    //     for(int j=0;j<index;j++){
    //         if(arr[j]>=x){
    //             c++;
    //         }
    //     }

    //    for(int j=i+1;j<n && j<=i+c;j++){
    //     b[j]+=1;
    //    }
       for(int i=0;i<n;i++){
        cout << b[i] << " ";
       }
       cout << endl;
    }
}