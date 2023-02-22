#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int a[3], sum=0;
        
        for( int i=0; i<3; i++)
        {
           cin >> a[i] ;
           sum+=a[i] ;
        }
        
        for( int i=0; i<3; i++)
        {
           if( a[i]==sum-a[i] )
           {
               cout << "YES\n" ;
               sum=-1;
               break;
           }
        }
        
        if(sum!=-1)
          cout << "NO\n" ;
    }

    return 0;
}
