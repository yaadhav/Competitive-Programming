// Q : https://www.codechef.com/problems/PERMSUBSEQ

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

        ll check=1, count=1;
        for( ll i=0; i<n-1; i++)
        {
            if( a[i]!=a[i+1] )
            { 
                if( check==a[i] )
                    check++;
                else
                    break;

                num.push_back(count);
                count=1;
            }
            else
                count++;
        }

        if( check==a[n-1] )
        num.push_back(count);

        ll mult=1, sum=0;
        for( ll i=0; i<num.size(); i++)
        {
            mult*=num[i];
            sum+=mult;            
        }

        sum=sum%1000000007 ;

        cout << sum << endl;
    } 
    
    return 0;
}

