// Q : https://codeforces.com/contest/1857/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        string n;
        cin >> n;

        n="0"+n;
        ll last=n.length()-1;
        for( int i=n.length()-2; i>=0; i--)
        {
            if( int(n[i+1])-48 >= 5 )
            {
                n[i]=char(int(n[i])+1);
                for( int j=i+1; j<=last; j++)
                    n[j]='0';
                last=i+1;
            }
        }     

        if( n[0]=='0' )
            n=n.substr(1,n.length()-1);

        cout << n << endl;
    } 

    return 0;
}