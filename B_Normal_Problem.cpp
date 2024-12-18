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
       string s;
       cin >> s;
       string ans="";
       for(int i=0;i<s.size();i++) {
        if(s[i]=='p'){
            ans='q'+ans;
        }
        else if(s[i]=='q'){
            ans='p'+ans;
        }
        else ans=s[i]+ans;
       }
       cout << ans << endl;
    }
}
