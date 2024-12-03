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
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0;i<n;i++) {
            mp[s[i]]++;
        }
        int max = 0;
        char x =' ';
        int min=INT_MAX;
        char y=' ';
       for (auto i : mp){
            if(i.second>max) {
                max = i.second;
                x = i.first;
            } 
            if(i.second<=min) {
                min = i.second;
                y = i.first;
            }
       }
    //    cout << x ;
    //    cout << y;
    //    if(max==min){
    //     x = s[0];
    //     y=s[n-1];
    //    }
       string ans = "";
       int c=0;
       for(int i=0;i<n;i++) {

        if(c==0 && s[i]==y && s[i]!=x){
            ans+=x;
            c=1;
        }
        else ans+=s[i];
       }
       cout << ans << endl;
    }
}