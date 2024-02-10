// Q : https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    
    sort( a.begin(), a.end() );
    sort( b.begin(), b.end() );
    
    int count=0;
    bool check;
    
    for( int i=a[a.size()-1]; i<=b[0]; i+=a[a.size()-1] )
    {
        check=true;
        for( int j=0; j<a.size(); j++)
        {
            if( i%a[j]!=0 )
                check=false;
        }
        
        if( !check )
            continue;
            
        for( int j=0; j<b.size(); j++)
        {
            if( b[j]%i!=0 )
                check=false;
        }
        
        if( check )
            count++;
    }
    
    return count;
}


int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a, b;
    int temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    for( int i=0; i<m; i++)
    {
        cin >> temp;
        b.push_back(temp);
    }

    int res = getTotalX( a, b);
    cout << res << endl;    

    return 0;
}
