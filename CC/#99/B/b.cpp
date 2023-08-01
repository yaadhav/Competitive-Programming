// Q : 

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll BinarySearch( vector<ll> a, ll x) 
{
    ll low=0, high=a.size()-1;

    while( low<=high ) 
    {
        ll mid = low + (high - low) / 2;
        if (a[mid] == x)
          return mid;
        if (a[mid] < x)
          low = mid + 1;
        else
          high = mid - 1;
    }

    return -1;
}

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a, p;
        ll temp;

        for( ll i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        ll max=0, ind;
        for( ll i=0; i<n; i++)
        {
            sort( p.begin(), p.end());

            if(p.size()==0)
                ind=-1;            
            if( p.size()>0 )
                ind=BinarySearch( p, a[i]);

            if(ind==-1)
                p.push_back(a[i]);
            else
                p.erase(p.begin()+ind);
            
            
            if( p.size()>max )
                max=p.size();
        }

        cout << max << endl;
    }
    return 0;
}