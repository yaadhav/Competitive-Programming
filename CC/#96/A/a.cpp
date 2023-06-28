// Q : https://www.codechef.com/START96C/problems/PILBELLS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n, x, k, p;
        cin >> n >> x >> k >> p;

        if(k<=x)
            p+=(10*k);
        else
            p+=(10*x+5*(k-x));

        if(k==n)
            p+=20;

        cout << p << endl;             
    }
    return 0;
}

