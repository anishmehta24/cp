#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
      int n;
      char ch;
      string s;
      cin >> n >> ch;
      cin>>s;
      s+=s;
      int count=0;
      int j=0,m=0;
      for(int i=0;i<s.length();i++){
        if(s[i]==ch)

        {
            count=0;
            while(s[i]!='g'&& i<s.length())
            {
                // cout<<s.size()<<endl;
                // cout<<s.length()<<endl;
                // cout<<n<<endl;
                count++;
                i++;
            }
            m=max(m,count);

        }
        

      }
      cout<<m<<endl;

    }
    
}