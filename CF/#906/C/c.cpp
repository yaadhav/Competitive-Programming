// Q : https://codeforces.com/contest/1890/problem/C

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
        string s;
        cin >> n >> s;

        if( n%2==1 )
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> ans;
        int i=0;
        for( int j=n-1; i<j && i<302; i++, j--)
        {
            if( s[i]==s[j] && s[i]=='0' )
            {
                ans.push_back(j+1);
                s.insert(j+1,"01");
                j+=2;
            }
            if( s[i]==s[j] && s[i]=='1' )
            {
                ans.push_back(i);
                s.insert(i,"01");
                i--;
                j+=3;
            }
        }

        if( i==302 )
            cout << -1 << endl;
        else
        {
            cout << ans.size() << endl;
            for( auto i: ans)
                cout << i << " ";
            cout << endl;
        }
    }   

    return 0;
}