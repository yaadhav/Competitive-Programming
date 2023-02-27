#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- )
    {
        string s;
        cin >> s;

        int cmp, count=0;
        char c='a';

        for( int i=0; i<s.length(); i++)
        {
            cmp=abs((int)c-(int)s[i]);

            if( cmp>13 )
                cmp=26-cmp;
            
            count+=cmp;
            c=s[i];
        }

        cout << count << endl ;
    }
        
    return 0;
}
