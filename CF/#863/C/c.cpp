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
        int n ;
        cin >> n ;

        vector<int> a={0}, b;
        int temp;

        for( int i=0; i<n-1; i++)
        {
            cin >> temp;
            b.push_back(temp);
            a.push_back(0);
        }

        for( int i=0; i<n-2; i++)
        {
            if( b[i]<=b[i+1] )
                a[i+1]=b[i];
            else 
                a[i]=b[i];
        }
        a[n-1]=b[n-2];

        for( auto i: a)
            cout << i << " ";
        cout << endl;
    } 
    
    return 0;
}

