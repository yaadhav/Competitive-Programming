// Q : https://www.codechef.com/START81D/problems/MELTGOLD

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
        int x, y, i;
        cin >> x >> y;

        for( i=1; y<x; i++)
            y+=i;

        cout << --i << endl;        
    } 
    
    return 0;
}

