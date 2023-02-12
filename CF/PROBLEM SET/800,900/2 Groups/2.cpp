#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long int t, cases;
    long int n, i, s1, s2;
    vector<long int> grp, grp1, grp2;   long int temp;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
		cin >> n ;

        for( i=0; i<n; i++)
        {
            cin >> temp;
            grp.push_back(temp);
        }

        for( auto &i : grp)
        {
            
            grp1.push_back(i) ;        
        }
        
        s1=accumulate(grp1.begin(),grp1.end(),0) ;
        s2=accumulate(grp2.begin(),grp2.end(),0) ;

        long int mod( long int ) ;
        cout << mod(s1)-mod(s2);
    }

    cin.tie(NULL);
    return 0;
}

long int mod( long int x)
{
    if ( x<0 )
        x=-x;

    return x;
}