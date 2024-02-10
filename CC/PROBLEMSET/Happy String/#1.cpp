#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int check( char a )
{
    char vowels[6] = {'a','e','i','o','u'} ;

    bool found = false ;
    int k;
    for( k=0; k<5; k++)
    {
        if ( a==vowels[k] )
        {
            found=true;
            break;
        }
    }

    if(found)
        return 1;
    else 
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);

    long long int t, cases, i, j, count;
    string str ;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> str ;

        count = 0 ;

        for( i=2; i<str.length(); i++ )
        {
            count = count + check( str[i-2] ) ;
            count = count + check( str[i-1] ) ;
            count = count + check( str[i] ) ;
        }       

        if(count==3)
            cout << "YES" ;
        else
            cout << "NO" ;

    }

    cin.tie(NULL);
    return 0;
}