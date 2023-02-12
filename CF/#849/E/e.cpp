#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        long long n, temp;

        cin >> n ;

        vector<int> a(n);
        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        long long small=abs(a[0]), count=0, sum=0;

        for( int i=0; i<n; i++)
        {
            sum+=abs(a[i]);
            if( abs(a[i])!=a[i])
                count++;
            if( abs(a[i])<small )
                small=abs(a[i]);
        }

        if( count%2==1 )
            sum-=(2*small);
        
        cout << sum << endl;
        a.clear();
    }   
    
    return 0;
}
