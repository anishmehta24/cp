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
    string s;
    cin >> s;
    int i=0;
    int n = s.size();
    vector<int> ans;
    vector<int> visited(n,0);
    int c=0;
    while(i<n) {
        if(s[i]=='0' && visited[i]==0){
            int j=i+1;
            // cout << j;
            while(j<n && s[j]!='1' && visited[j]==0){
                j++;
            }
            if(j<n){
                visited[j]=1;
                int k=j+1;
                while(k<n && s[k]!='0'&& visited[i]==0){
                    k++;
                }
                
                if(k<n){
                    visited[k]=1;
                    c++;
                    ans.push_back(i);
                    ans.push_back(j);
                    ans.push_back(k);
                }
            }
        }
        i++;
    }
    i=0;
    vector<int> ans1;
    while(i<n) {
        if(visited[i]==0 && s[i]==0){
            c++;
            ans1.push_back(i);
        }
    }

    cout << c << endl;
    for(int i=0;i<ans.size();i+=3){
        cout << 3 << " " ;
        if(i+2 < n){
            cout << ans[i]+1 << " " << ans[i+1]+1 << " " << ans[i+2]+1 << endl;
        }
    }
    for(int i=0;i<ans1.size();i++) {
        cout << 1 << " ";
        cout << ans1[i]+1 << endl;
    }
}