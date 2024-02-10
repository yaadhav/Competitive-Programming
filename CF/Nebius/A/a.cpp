// Q : https://codeforces.com/contest/1804/problem/A

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
        int x, y;
        cin >> x >> y ;

        x=abs(x);
        y=abs(y);

        int min = x<y ? x:y ;

        int ans=(min*2);
        int add=(abs(x-y)*2)-1;

        if( add<0 )
            add=0;

        cout << ans+add << endl;
    } 
    
    return 0;
}

