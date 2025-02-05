#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n ; 
        vector<long long> a(n);
        long long sum=0;

       
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum+=a[i];
        }

        sort(a.begin(),a.end());
         if(n<=2)
        {
            cout<<-1<<endl;
            continue;
        }
        double m = sum/(2.0*n);
        long long c=0;
         for (int i = 0; i < n; i++) {
            if(m>a[i])
            {
                c++;
                if(c>n/2)
                break;
            }
        }

        if(c>n/2){
            cout<<0<<endl;
        }

            
        else
        {
            long long h = n/2 ;
            long long x =  2*n*a[h] - sum +1 ;

           if(x>=0)
            cout << x<< endl;
           else
            cout<<-1<<endl;
        }
        
    }
    
    return 0;
}
