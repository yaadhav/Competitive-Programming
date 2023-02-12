#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<long long int> s, temp; long long int S;
    vector<long long int> t1, t2;

    cin >> n;

    for( int i=0; i<n; i++)
    {
        cin >> S;
        s.push_back(S);
    }

    temp=s;
    sort( temp.begin(), temp.end() ) ;

    for( int i=0; i<n; i++)
    {
        if( s[i]>temp[(n/2)] )
            cout << 1 ;
        else 
            cout << 0 ;
    }
    
    return 0;
}
