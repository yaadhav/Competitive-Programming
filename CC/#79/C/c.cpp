// Q : https://www.codechef.com/START79D/problems/DISTOPPSUMS

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
        int n;
        cin >> n;
        
        for( int i=n; i>1; i=i-2)
            cout << i << " ";
        for( int i=1; i<n; i=i+2)
            cout << i << " ";
        cout << endl ;
    } 
    
    return 0;
}

