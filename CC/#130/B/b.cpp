// Q : https://www.codechef.com/problems/MKEQ

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
        cin >> n;

        vector<ll> a(n);

        ll temp, minn=INT_MAX;
        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);

            if( i>0 && i<n-1 )
                minn=min( minn, temp);
        }

        cout << a.back() << " " << a.front() << "min" << minn << endl;


        if( a.back()!=a.front() || a.back()>minn )
            cout << "NO\n";
        else
            cout << "YES\n";      
    }

    return 0;

}

