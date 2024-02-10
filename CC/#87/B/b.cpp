// Q : https://www.codechef.com/problems/EXISTENCE

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        ll x, y;
        cin >> x >> y;


        if(x==0 || y==0)
        {
            if(x==0 && y==0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }

        x*=x;
        ll check = (x/y)+((4*y)/x);
        
        if(check==4 && (x%y)==0 && ((4*y)%x)==0 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

