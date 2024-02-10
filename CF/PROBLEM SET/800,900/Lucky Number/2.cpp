#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n=t, a=0;

    while( n>9 )
    {
        n=n/10;
        a++;
    }

    long int p=pow(10,a);
    cout << ((n+1)*p)-t ;

    return 0;
}