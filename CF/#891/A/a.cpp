// Q : https://codeforces.com/contest/1857/problem/A

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

        int temp, sum=0;
        for( int i=0; i<n; i++)
        {   
            cin >> temp;
            sum+=temp;
        }

        if( sum%2==0 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } 

    return 0;
}