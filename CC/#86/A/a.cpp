// Q : https://www.codechef.com/problems/CRICMATCH

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int x, y;
        cin >> x >> y;

        y*=36;

        if(x<=y)
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }
    return 0;
}

