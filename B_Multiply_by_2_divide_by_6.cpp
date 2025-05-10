#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int

using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
    ll n;
    cin >> n;
    int c=0;
    while(n>=1){
        if(n==1) break;
        if(n%6==0){
            n/=6;
            c++;
        }
        else{
            n*=2;
            // cout << n << endl;
            c++;
        }
    }

    if(n==1) cout << c << endl;
    else cout << -1 << endl;
     
    }

    return 0;
}
