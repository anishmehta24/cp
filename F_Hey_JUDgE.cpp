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
    int t;
    cin >> t;
    while(t--) {
       string s;
       cin >> s;
       ll n = s.size();
       vector<int> freq(6,0);
       for(int i=0;i<n;i++) {
         freq[s[i]-'A' + 1]++;
       }
       bool flag = false;
       for(int i=1;i<=5;i++) {
        if(freq[i] > 0){
            freq[i]--;
        }
        else {
            
            for(int j=1;j<=5;j++) {
                for(int k=1;k<=5;k++) {
                    if(j+k == i && freq[k]>0 && freq[k] > (j==k)){
                        freq[j]--;
                        freq[k]--;
                        flag = true;
                        break;
                    }
                    if(flag) break;
                }
                 if (!flag) {cout << "NO" << endl; continue;}
            }

        }
        cout << "YES" << endl;
       }
       
    }
}