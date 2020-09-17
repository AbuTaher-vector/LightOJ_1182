
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
      ll  x ,t,cnt;
      cin>>t;
      for(int i=1;i<=t;i++)
      {
          cin>>x;
          cnt=0;
        while(x!=0)
          {
         if((x%2)==1) cnt++;
         x/=2;
         }
           cout<<"Case "<<i<<": ";
            if(cnt&1) cout<<"odd"<<endl;
            else cout<<"even"<<endl;
        }


}
