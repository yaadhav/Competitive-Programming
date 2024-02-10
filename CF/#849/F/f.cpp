// Question : https://codeforces.com/contest/1791/problem/F

#include <bits/stdc++.h>
using namespace std;

inline int SumOfDigits( long long n )
{
    long long sum=0;
    while( n>0 )  {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        long long n, q, temp;
        cin >> n >> q;

        vector<int> a;
        for( int i=0; i<n; i++)  {
            cin >> temp;
            a.push_back(temp);
        }

        for( int i=0; i<q; i++)
        {
            long long t;
            cin >> t;

            if( t==1 )  {
                long long l, r;
                cin >> l >> r;

                for( int j=l-1; j<r; j++)
                    a[j]=(a[j]%9)==0 ? 9:(a[j]%9);
            }
            else  {
                long long x;
                cin >> x;
                cout << a[x-1] << "\n" ;
            }
        }
            
    }   
    
    return 0;
}
