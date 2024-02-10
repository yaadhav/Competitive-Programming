#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if( k%2==0 )
            sort( s.begin(), s.end());
        else
        {
            string s1="", s2="";
            for( int i=0; i<n; i++)
            {
                if( i%2==0 )
                    s1+=s[i];
                else
                    s2+=s[i];
            }

            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            s="";
            for( int i=0; i<n/2; i++)
            {
                s+=s1[i];
                s+=s2[i];
            }

            if(n%2==1)
                s+=s1[n/2];
        }

        cout << s << endl;        
    }

    return 0;
}
