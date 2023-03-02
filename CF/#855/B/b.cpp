#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int n, k;
        string s;

        cin >> n >> k >> s ;

        vector<int> c;
        for( int i=0; i<52; i++)
            c.push_back(0);

        int index;
        for( int i=0; i<n; i++)
        {
            if( (int)s[i]>96 )
                index=(int)s[i]-71;
            else
                index=(int)s[i]-65;

            c[index]++;
        }

        int d, min, c1=0, c2=0;
        for( int i=0; i<26; i++)
        {
            min= c[i]<c[i+26] ? c[i]:c[i+26] ;
            c1+=min;

            d=abs(c[i]-c[i+26]);

            if( d>1 )
            c2+=d/2;
        }

        if( c2>k )
            c2=k;

        cout << c1+c2 << endl;      
    } 
    
    return 0;
}

