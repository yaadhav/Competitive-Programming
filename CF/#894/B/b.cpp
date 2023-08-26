// Q : https://codeforces.com/contest/1862/problem/B

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

        vector<int> a, b;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        a.push_back(b[0]);
        for( int i=1; i<n; i++)
        {
            a.push_back(b[i]);
            if( b[i-1]>b[i] )
                a.push_back(b[i]);
        }

        cout << a.size() << endl;
        for( int i : a)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
