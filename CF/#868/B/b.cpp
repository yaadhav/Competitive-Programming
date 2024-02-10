// Q : https://codeforces.com/contest/1823/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> p;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            p.push_back(temp);
        }

        int count=0;
        for( int i=0; i<n; i++)
        {
            if(p[i]%k!=(i+1)%k)
                count++;
        }

        if(count==0)
            cout << 0 << endl;
        else if(count==2)
            cout << 1 << endl;
        else
            cout << -1 << endl;        
    } 
    
    return 0;
}

