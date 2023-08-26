// Q : https://codeforces.com/contest/1862/problem/C

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

        vector<pair<int,int>> a;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            while(temp--)
                if( temp<i )
                    a.push_back(make_pair(temp,i));
                else if( temp>i )
                    a.push_back(make_pair(i,temp));
        }

        sort( a.begin(), a.end());

        string ans = a.size()%2==0 ? "YES":"NO";
        for( int i=0; i<a.size() && ans=="YES"; i+=2)
        {
            if( a[i].first!=a[i+1].first || a[i].second!=a[i+1].second )
                ans="NO";            
        }

        cout << ans << endl;
    }

    return 0;
}
