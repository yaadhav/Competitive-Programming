// Q : https://www.codechef.com/problems/ABPLUSC

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        ll x;
        cin >> x;

        if(x==1)
        {
            cout << -1 << endl;
            continue;
        }

        if(x<=1000001)
        {
            cout << 1 << " " << 1 << " " << x-1 << endl;
            continue;
        }

        ll a=sqrt(x);
        ll b=a, c=x-(a*b);

        if( a*b==x )
        {
            a--; b--;
            c=x-(a*b);
        }

        cout << a << " " << b << " " << c << endl;
    } 
    
    return 0;
}

