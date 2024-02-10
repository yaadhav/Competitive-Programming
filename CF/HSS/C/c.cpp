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
        int n;
        cin >> n;

        vector<int> a;

        int i, j;
        for( i=1; i<=n; i*=2)
            a.push_back(i);

        i/=2;
        for( j=i/2; i+j<n; j/=2)
        {
            i+=j;
            a.push_back(i);
        }

        if( i==n )
        {
            cout << a.size() << endl;
            for( int i=a.size()-1; i>=0; i--)
                cout << a[i] << " ";        
            cout << endl;
            continue;
        }

        int d=n-i, p=0;
        vector<int> temp;
        while( d>0 )
        {
            if( d%2==1 )
            {
                temp.push_back(n);   
                n-=(pow(2,p));
            }
            d/=2;
            p++;
        }
        cout << temp.size()+a.size() << endl;

        for( int i : temp)
            cout << i << " ";

        for( int i=a.size()-1; i>=0; i--)
            cout << a[i] << " ";        
        cout << endl;
    }

    return 0;
}
