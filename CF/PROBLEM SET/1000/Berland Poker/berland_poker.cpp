// Q : https://codeforces.com/problemset/problem/1359/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        if( (n/k)>=m )
        {
            cout << m << endl;
            continue;
        }

        int d=m-(n/k);
        cout << (n/k)-(d+k-2)/(k-1) << endl;
    }

    return 0;
}