#include <bits/stdc++.h>
using namespace std;

int CheckSum( string str )
{
    sort( str.begin(), str.end() );
 
    int sum=0;
    for( int i=1; i<=str.length(); i++)
    {
        if( str[i]!=str[i-1] )
            sum++;
    }
 
    return sum ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int n;
        vector<char> s;
        string a, b;
        char temp;

        cin >> n ;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            s.push_back(temp);
            b+=temp;
        }

        int max=0, sum;

        for( int i=0; i<n-1; i++ )
        {
            a+=s[i];
            b.erase(0,1);
            
            sum=CheckSum(a);
            sum+=CheckSum(b);

            if( sum>max )
                max=sum;
        }

        cout << max << endl ;
        
    }   
    
    return 0;
}
