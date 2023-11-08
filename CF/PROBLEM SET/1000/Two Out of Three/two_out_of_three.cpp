#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for( int &i: a)
            cin >> i;    

        vector<int> b=a;
        sort( b.begin(), b.end());

        int x=-1, y=-1, count=1;
        for( int i=0; i<n-1; i++)
        {
            if( b[i]==b[i+1] )
                count++;
            else
            {
                if( count>=2 && x==-1 )
                    x=b[i];
                else if(count>=2)
                {
                    y=b[i];
                    break;
                }
                count=1;
            }
        }

        if( count>=2 && x==-1 )
            x=b[n-1];
        else if(count>=2 && y==-1 )
            y=b[n-1];

        if( x==-1 || y==-1 )
        {
            cout << -1 << endl;
            continue;
        }

        int c1=0, c2=0;
        for( int i=0; i<n; i++)
        {
            if( a[i]==x )
            {
                if(c1)
                    cout << 2 << " ";
                else
                {
                    cout << 1 << " ";
                    c1=1;
                }
            }                
            else if( a[i]==y )
            {
                if(c2)
                    cout << 3 << " ";
                else
                {
                    cout << 1 << " ";
                    c2=1;
                }
            }   
            else
                cout << 1 << " ";  
        }
        cout << endl;
    }

    return 0;
}