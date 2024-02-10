#include <bits/stdc++.h>
using namespace std;

void staircase(int n) {

    int c=n-1;    
    for( int i=1; i<=n; i++)
    {
        for( int j=1; j<=c; j++)
            cout << " " ;
        for( int j=c+1; j<=n; j++)
            cout << "#" ;
        cout << endl;
        c--;
    }
}

int main()
{
    int n;
    cin >> n;
    staircase(n);
}
