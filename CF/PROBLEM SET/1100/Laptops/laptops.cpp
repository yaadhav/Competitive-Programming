#include <bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int n;
    cin >> n;

    vector<pair<int,int>> l;
    int t1, t2;
    for( int i=0; i<n; i++)
    {
        cin >> t1 >> t2;
        l.push_back({t1,t2});
    }

    sort( l.begin(), l.end() );

    for( int i=1; i<n; i++)
    {
        if(l[i-1].second>l[i].second)
        {
            cout << "Happy Alex";
            exit(0);
        }
    }

    cout << "Poor Alex" ;    

    return 0;
}