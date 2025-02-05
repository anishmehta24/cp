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
    int n,m;
    cin >> n >> m;
    vector<char> s(m);
    vector<int> a(m);
    for(int i=0;i<m;i++) {
        cin >> s[i];
        cin >> a[i];
        // cout << a[i] << endl;
    }
    set<int> st;
    for(int i=0;i<m;i++) {
        // cout << 1 << endl;
      if(s[i]=='+') {
        if(st.size()==0) {
            st.insert(a[i]);
            cout << "Success" << endl;
        }
        else {
            if(st.find(a[i])!=st.end()) cout << "Already on" << endl;
            else {
                int c=0;
                // cout << 1<< endl;
                for(auto it:st){
                    if(gcd(it,a[i])!=1) c=it;
                }
                if(c!=0){ 
                    cout << "Conflict with " << c << endl;
                }
                else {
                    st.insert(a[i]);
                    cout << "Success" << endl;
                }
            }
        }
      }
      else if(s[i]=='-') {
        if(st.size()==0 || st.find(a[i])==st.end()){
            cout << "Already off" << endl;
        }
        else {
            st.erase(a[i]);
            cout << "Success" << endl;
        }
      }
    }

}