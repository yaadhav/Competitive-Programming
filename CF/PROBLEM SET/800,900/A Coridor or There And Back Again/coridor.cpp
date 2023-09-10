// Q : https://codeforces.com/problemset/problem/1872/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, d, s;
        cin >> n >> d >> s;

        int min=d+((s-1)/2);
        for( int i=1; i<n; i++)
        {
            cin >> d >> s;
            if( d+((s-1)/2)<min )
                min=d+((s-1)/2);
        }

        cout << min << endl;
    }
    
    return 0;
}