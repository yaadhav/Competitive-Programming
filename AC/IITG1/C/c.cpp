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
        int n, k;
        string p;
        cin >> n >> k >> p ;


        int b=0, w=0;
        vector<int> a;
        for( int i=0; i<n; i++)
        {
            if( p[i]=='B' )
            {
                b++;
                if( w!=0 )
                    a.push_back(w);
                w=0;
            }

            else
            {
                w++;
                if( b!=0 )
                    a.push_back(b);
                b=0;
            }

            if( b==k )
                break;
        }

        if( b==k )
        {
            cout << 0 << endl ;
            continue;
        }

        if( b!=0 )
            a.push_back(b);
        if( w!=0 )
            a.push_back(w);

        int sum, min, ans=k;
        int check = p[0]=='B' ? 1:0 ;

        for( int i=0; i<a.size(); i++)
        {
            sum=0;  min=0;
            for( int j=i; sum<k &&  j<a.size() ; j++)
            {
                sum+=a[j];
                if( j%2==check )
                min+=a[j];
            }

            min+=k-sum;

            cout << min << endl ;
            
            if( min<ans && sum>=k )
            ans=min;
        }

        cout << ans << endl ;
    }

    return 0;
}
