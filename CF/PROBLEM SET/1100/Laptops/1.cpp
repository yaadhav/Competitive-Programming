#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, t1, t2;
    cin >> n;

    vector<int> a, b;
    for( int i=0; i<n; i++)
    {
        cin >> t1 >> t2;
        a.push_back(t1);
        b.push_back(t2);
    }

    bool check;
    for( int i=0; i<n; i++)
    {
        for( int j=i+1; j<n; j++)
        {
            if( a[i]<a[j] && b[i]>b[j] )
            {
                cout << "Happy Alex" ;
                exit(0);
            }
        }
    }

    cout << "Poor Alex" ;    

    return 0;
}