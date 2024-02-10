// Q : https://codeforces.com/contest/1856/problem/A

#include <bits/stdc++.h>
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

        vector<int> a, b;
        int temp;

        for( int i=0; i<n; i++)
        {   
            cin >> temp;
            a.push_back(temp);
        }

        b=a;

        sort(a.begin(), a.end());

        if( a==b )
        {
            cout << 0 << endl;
            continue;
        }

        for( int i=n-1; i>=0; i--)
        {
            if( a[i]!=b[i] )
            {
                cout << a[i] << endl;
                break;
            }
        }
    } 

    return 0;
}