#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <queue>
const int MOD = 998244353;
#define ll long long int
using namespace std;


int main() {
    
    int t;
    cin >> t;
    while(t--) {
        ll n,d;
        cin >> n >> d;

        vector<int> ans;
        ans.push_back(1);
        if(d%3==0) ans.push_back(3);

        else {
            if(n>2) {
                ans.push_back(3);
            }
        }

        if(d%5==0) ans.push_back(5);
        if(d%7==0) {
            ans.push_back(7);
        }
        else{
            if(n>2) {
                ans.push_back(7);
            }
        }

        if(d%9==0) ans.push_back(9);
        else {
            if(d==1 && n>5) ans.push_back(9);
            else if(d==2 && n>5) ans.push_back(9);
            else if(d==3 && n>2) ans.push_back(9);
            else if(d==4 && n>5) ans.push_back(9); 
            else if(d==5 && n>5) ans.push_back(9); 
            else if(d==6 && n>2) ans.push_back(9); 
            else if(d==7 && n>5) ans.push_back(9); 
            else if(d==8 && n>5) ans.push_back(9); 
        }

        for(auto i:ans) {
            cout << i << " "; 
        }
        cout << endl;
    }

}
