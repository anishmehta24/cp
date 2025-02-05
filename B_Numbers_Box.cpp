#include <iostream>
#include <cstdint>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;

        int a[10][10] ;
        int s=0,neg=0,min=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]<0)
                neg++;
               // cout<<abs(a[i][j])<<endl;
                if(abs(a[i][j])<min)
                min = abs(a[i][j]);
                s+=abs(a[i][j]);
            }
        }

       // cout<<min<< " "<<s<<endl;


        if(neg%2==0)
        cout<<s<<endl;
        else
        {
            cout<<s-(2*min)<<endl;
        }

    }
    return 0;
}