#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n) {
    
    int tot=1;
    for( int i=1; i<=n; i++)
    {
        if( i%2==1 )
            tot*=2;
        else
            tot++;
    }
    return tot;    
}

int main()
{
    int n;
    cin >> n;
    
    int res=utopianTree(n);
    cout << res ;
    
    return 0;
}
