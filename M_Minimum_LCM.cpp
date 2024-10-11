#include <iostream>

using namespace std;

int lcm(int a, int b)
{
    int greater = max(a, b);
    int smallest = min(a, b);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            return i;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int c=0;
       for(int i=2;i<n;i++){
        if(lcm(i,n-i)==n-i)
        {
            c=1;
            cout<<i<<" "<<n-i<<endl;
            break;
        }
       }
       if (c==0)
       {
        /* code */
        cout<<1<<" "<<n-1<<
       }
       

    }
    
}