#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {
    
    int min=(n/2)-(p/2);

    if( min>p/2 )
        min=p/2;
    
    return min;
}

int main()
{
    int n, p;
    cin >> n >> p;

    int res=pageCount(n , p);
    cout << res ;

    return 0;
}
    
