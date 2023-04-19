// Q : https://www.codechef.com/problems/FIFTYPE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n;

        int ans=0;

        if(n<50)
        {
            ans=n%2;
            n-=(n%2)*3;
            ans+=(50-n)/2;
        }
        else if(n>50)
        {
            ans=(n-50)%3;
            n+=((n-50)%3)*2;
            ans+=(n-50)/3;
        }

        cout << ans << endl;
    }
    return 0;
}

