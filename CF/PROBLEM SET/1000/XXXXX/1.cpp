#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    for( int cases=0; cases<t; cases++)
    {
        int n, x, temp;
        cin >> n >> x ;
 
        vector<int> a;
        for( int i=0; i<n; i++)
        {
            cin >> temp ;
            a.push_back(temp);
        }
 
        int sum, max=0;
        int c, count=0;
        bool check=true;
        for( int i=0; i<n; i++)
        {
            c=1;
            sum=a[i];
            if( sum>=max && sum%x!=0 )
            {
                max=sum;
                check=false;
                if( c>count )
                    count = c;
            }
            
            for( int j=i+1; j<n; j++)
            {
                c++;
                sum+=a[j];
                if( sum>=max && sum%x!=0 )
                {
                    max=sum;
                    check=false;
                    if( c>count )
                        count = c;
                }
            }
        }
 
        if( check )
        count=-1;
 
        cout << count << endl ;
 
        a.clear();
    }
 
    return 0;
}