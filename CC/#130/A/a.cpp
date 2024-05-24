// Q : https://www.codechef.com/problems/ALBS

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
	ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        int c=0;
        for( ll i=1; i<n; i++)
        {
            if( s[i]==s[i-1] )
                c++;
        }

        cout << c << endl;
    }

    return 0;

}

