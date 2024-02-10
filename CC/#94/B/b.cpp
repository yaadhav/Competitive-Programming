// Q : https://www.codechef.com/problems/CS2023_STK

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n ;

        int a=0, o=0, om=0, addy=0, temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            if(temp!=0)
                o++;
            else
            {
                if( o>om )
                    om=o;
                o=0;
            }
        }

        if( o>om )
            om=o;
        o=0;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            if(temp!=0)
                a++;
            else
            {
                if( a>addy )
                    addy=a;
                a=0;
            }
        }

        if( a>addy )
            addy=a;
        a=0;

        if( addy==om )
            cout << "Draw\n" ;
        else if( addy>om )
            cout << "Addy\n" ;
        else
            cout << "Om\n" ;        
    }
    return 0;
}

