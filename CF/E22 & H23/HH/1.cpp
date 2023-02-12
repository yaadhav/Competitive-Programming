#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<long long int> s; long long int S;
    vector<long long int> t1, t2;

    cin >> n;

    for( int i=1; i<=n; i++)
    {
        cin >> S;
        s.push_back(S);
    }

    

    
    return 0;
}

vector<long long int> Compare( vector<long long int> s, int n )
{
    vector<long long int> t1, t2;

    sort( s.begin(), s.end() ) ;

    t1.push_back(s[0]);
    for( int i=3; i<n; i=i+3)
    {
        t1.push_back(s[i++]);
        t1.push_back(s[i]);
    }

    for( int i=1; i<n; i=i+3)
    {
        t2.push_back(s[i++]);
        t2.push_back(s[i]);
    }

    long long int sum1 = accumulate( t1.begin(), t1.end(), 0);
    long long int sum2 = accumulate( t2.begin(), t2.end(), 0);

    if( sum1==sum2 )
        return t1, t2;

    else
    {
        vector<long long int> greater = sum1>sum2 ? t1:t2 ; 
        return greater;
    }
}