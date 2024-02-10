// Q : https://codeforces.com/contest/1823/problem/A

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
        int  n, k;
        cin >> n >> k;

        int pos, neg, ind, ans=0;

        for( int i=0; i<=n/2; i++)
        {
            pos=(i*(i-1))/2;
            neg=((n-i)*(n-i-1))/2;

            if(pos+neg==k)
            {
                ans=1;
                ind=i;
                break;
            }           
        }

        if(!ans)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        for( int i=0; i<n-ind; i++)
            cout << 1 << " ";
        for( int i=0; i<ind; i++)
            cout << -1 << " ";
        cout << endl;
    } 
    return 0;
}