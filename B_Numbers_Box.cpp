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

        int arr[10][10] ;
        int s=0,neg=0,min=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]<0)
                neg++;
               // cout<<abs(arr[i][j])<<endl;
                if(abs(arr[i][j])<min)
                min = abs(arr[i][j]);
                s+=abs(arr[i][j]);
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