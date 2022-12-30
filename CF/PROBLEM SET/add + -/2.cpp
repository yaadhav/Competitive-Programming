#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int cases,t;
  cin>>t;
  for(cases=0;cases<t;cases++)
  {
   int n;
   string s,ans="";
   cin>>n;
   cin>>s;
   int count=1;
if(s[0]=='1')
   {
    count++;
   }
   for(int i=1;i<n;i++)
   {
    if(s[i]=='1')
    {
        if(count%2==1)
        {
        ans=ans+"+";
        count++;
        }
        else if(count%2==0)
        {
            ans=ans+"-";
            count++;
        }
    }else{
        ans=ans+"+";
     
    }
   }
   
   cout<<ans<<endl;

  }
  
    
  
}