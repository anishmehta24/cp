#include <iostream>
#include <set>
using namespace std;
 
int main(){
 
    long long t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        string str;
        cin >> str;
        set<char> s; long long cnt=0;
        for(long long i = 0; i < str.size(); i++){
            s.insert(str[i]);
            cnt += s.size();
        }
 
        cout << cnt << endl;
    }
 
}