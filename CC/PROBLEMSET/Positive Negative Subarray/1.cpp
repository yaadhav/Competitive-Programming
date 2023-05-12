// Q : https://www.codechef.com/problems/POSITNEG

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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

        ll temp, neg=0;

        for( ll i=1; i<=n; i++)
        {
            cin >> temp;

            if(temp<0)
                neg+=i;
        }

        ll tot=(n*(n+1))/2;
        cout << abs(tot-(2*neg)) << endl;
    } 
    
    return 0;
}

