// Q : https://codeforces.com/contest/1796/problem/A

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
        int k;
        string s;

        cin >> k >> s;

        string check="FBFFBFFB";
        check+=check+check;

        int res = check.find(s);

        if( res<24 && res>=0 )
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    } 
    
    return 0;
}

