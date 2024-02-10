#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m, a;
    cin >> n  >> m >> a ;

    long long int a1=n/a;
    long long int a2=m/a;

    if( n%a!=0 )
        a1++;
    if( m%a!=0 )
        a2++;

    cout << a1*a2 << endl;
    
    return 0;
}
