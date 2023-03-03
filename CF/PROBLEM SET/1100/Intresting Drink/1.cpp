// Q : https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, q;
    vector<int> x, m;
    int temp;

    cin >> n;
    for( int i=0; i<n; i++)
    {
        cin >> temp;
        x.push_back(temp);
    }


    sort( x.begin(), x.end());

    cin >> q;
    for( int i=0; i<q; i++)
    {
        cin >> temp;
        m.push_back(temp);
    }

    int count;
    for( int i=0; i<q; i++)
    {
        count=0;
        for( int j=0; j<n; j++)
        {
            if( m[i]>=x[j] )
                count++;
        }
        cout << count << endl;
    }
    
    return 0;
}