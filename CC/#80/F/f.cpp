// Q : https://www.codechef.com/START79D/problems/ONEORTWO

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        cin >> n;
        
        vector<ll> a, num;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        } 

        sort( a.begin(), a.end() );

        ll check=1, count=0;
        for( ll i=0; i<n-1; i++)
        {
            if( check!=a[i] )
            {
                num.push_back(count);
                check++;
                count=0;
                i--;
            }
            else
                count++;
        }

        num.push_back(count);

        for( auto i : num )
            cout << i << " " ;
        cout << endl ;

        ll mult=1, sum=0;
        for( ll i=0; i<num.size(); i++)
        {
            mult*=num[i];
            sum+=mult;            
            cout << sum << "->";
        }

        cout << sum << endl;
    } 
    
    return 0;
}

