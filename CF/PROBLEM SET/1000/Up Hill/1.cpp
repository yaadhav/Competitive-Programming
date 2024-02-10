#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a, b, n;

    cin >> a >> b;
    n=a+b+1;

    for( int i=b+1; i<=n && a+1>0; i++,a-- )
        cout << i << " " ;

    for( int i=b; i>0 && b>0; i--,b-- )
        cout << i << " " ;
    
    return 0;
}