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
        ll n;
        cin >> n;

        vector<ll> neg={0};
        ll temp, max=0;

        for( ll i=1; i<=n; i++)
        {   
            cin >> temp;
            max+=abs(temp);
            
            if(temp<0)
                neg.push_back(i);
            else if(temp==0)
                neg.push_back(-i);

        }

        ll min=0, start, check=false;
        for( ll i=1; i<neg.size()-1; i++)
        {
            start=neg[i];
            while( abs(neg[i])+1==abs(neg[i+1]) && start>0 && i<neg.size()-1 )
            {
                i++;

                if( i==neg.size()-2 && neg[i+1]<0 )
                    check=true;
            }

            if(start>0)
                min++;            
        }

        if( check==false && neg[neg.size()-1]>0 )
            min++;

        cout << max << " " << min << endl;
    } 

    return 0;
}