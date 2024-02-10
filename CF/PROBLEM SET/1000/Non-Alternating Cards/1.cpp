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
        int n;
        cin >> n;

        int i, sum=0; 
        int aw=0, ab=0, bw=0, bb=0;

        for( i=1; sum<n; i++)
        {
            if( i%4==0 || i%4==1 )
            {
                ab+=i/2;
                aw+=i-(i/2);
            }
            else    
            {
                bw+=i/2;
                bb+=i-(i/2);
            }

            sum=aw+ab+bw+bb;
        }

        int a=(n-sum);
        if( (i-1)%4==0 || (i-1)%4==1 )
        {
            aw += (i-1)%4==0 ? a/2:a-(a/2) ;
            ab += (i-1)%4==0 ? a-(a/2):a/2 ;
            
        }
        else
        {
            bw += (i-1)%4==2 ? a-(a/2):a/2 ;
            bb += (i-1)%4==2 ? a/2:a-(a/2) ;
        }

        cout << aw << " " << ab << " " << bw << " " << bb << endl ;
    }
 
    return 0;
}