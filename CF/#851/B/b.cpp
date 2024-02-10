// Question : https://codeforces.com/contest/1788/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
       int n;
       cin >> n;

       int x=n/2, y=n-x;
       int temp=x, m=0, a=4;

       while( temp%10==9 )
       {
            a = a==5 ? 4:5 ;
            m=m*10+a ;
            temp/=10;
       }

       if( x%10==9 )
       {
        x+=m;
        y-=m;
       }

       cout << x << " " << y << endl ;
       
    }   
    
    return 0;
}
