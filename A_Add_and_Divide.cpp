#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        int x,y,c=0,ans=INT_MAX;
        for(int i=0;i<30;i++){
            y=b+i;
            if(y==1)continue;
            c=i;
            x=a;
            while(x>0){
                x=x/y;
                c++;
            }
            ans=min(c,ans);

        }

        cout<<ans<<endl;
    

    }
    
}