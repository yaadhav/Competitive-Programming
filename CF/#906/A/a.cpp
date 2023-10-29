// Q : https://codeforces.com/contest/1890/problem/A

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

        sort( a.begin(), a.end());

        vector<int> counts;
        int count=1;
        for( int i=0; i<n-1; i++)
        {
            if( a[i]==a[i+1] )
                count++;
            else
            {
                counts.push_back(count);
                count=1;
            }
        }
        counts.push_back(count);

        if( counts.size()>=3 )
        {
            cout << "No" << endl;
            continue;
        }

        if( counts.size()==1 )
        {
            cout << "Yes" << endl;
            continue;
        }

        if( abs(counts[0]-counts[1])<=1 )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;        
    }

    return 0;
}