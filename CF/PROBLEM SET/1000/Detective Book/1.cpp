#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n ;

    vector<int> a;  int A;
    for( int i=0; i<n; i++)
    {
        cin >> A;
        a.push_back(A);
    }

    int count=0, check=a[0];
    for( int i=1; i<=n; i++)
    {
        if( a[i-1]>check )
        check=a[i-1];

        if( i==check )
        count++;
    }

    cout << count << endl;
        
    return 0;
}
