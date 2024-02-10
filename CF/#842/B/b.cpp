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
        cin >> n >> k ;

        vector<int> p ;
        vector<int>::iterator it;
        int P;

        for( int i=0; i<n; i++)
        {
            cin >> P;
            p.push_back(P);
        }

        int a=1, b=2, check=0;
        while( a<b )
        {
            check++;
            it = find(p.begin(), p.end(), check);
            a=it-p.begin();
            it = find(p.begin(), p.end(), check+1);
            b=it-p.begin();
        }

        cout << a << "->" << b << "==" ;
        int ans = n-check;
        if( ans%k!=0 )
            ans+=k;
        cout << ans/k << endl ;

        p.clear();
    }   
    
    return 0;
}
