// Q : https://www.codechef.com/problems/SUMPERM

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
        int n;
        cin >> n;
        
        vector<int> a;
        for( int i=1; i<=n; i++)
            a.push_back(i);
        
        ll sum=accumulate( a.begin(), a.end(), 0 );

        if( sum%n==0 )
        {
            cout << -1 << endl ;
            continue;
        }

        sum=1;
        for( int i=1; i<n-1; i++)
        {
            sum+=a[i];

            if( sum%(i+1)==0 )
            {
                a[i]++;
                a[i+1]--;
                sum++;
            }
        }

        for( auto i : a )
            cout << i << " " ;
        cout << endl;
    } 
    
    return 0;
}

