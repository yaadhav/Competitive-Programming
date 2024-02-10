// Q : https://codeforces.com/contest/1843/problem/A

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

        vector<int> a;
        int temp;

        for( int i=0; i<n; i++)
        {   
            cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(), a.end());

        int cost=0;
        for( int i=0; i<n/2; i++)
            cost+=a[n-1-i]-a[i];

        cout << cost << endl;
    } 

    return 0;
}