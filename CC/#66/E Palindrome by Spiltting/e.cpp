#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    int t, cases, i, j, n, temp;
    vector <int> a; int A ;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        cin >> n;
        temp=n;

        for( i=0; i<n; i++)
        {
            cin >> A;
            a.push_back(A) ;
        }

        j=n-1;
        for( i=0; i<n/2; i++)
        {
            if ( a[i]>a[j] )
            {
                a.insert( a.begin()+i, a[j]) ;
                a[i+1]=a[i+1]-a[i] ;
                n++;
            }             

            else if ( a[j]>a[i] )
            {
                a.insert( a.begin()+j+1, a[i]) ;
                a[j]=a[j]-a[i] ;
                n++;
            }

            else
                --j ;
        }

        cout << n-temp << endl ;
        
        a.clear();
    }   
    cin.tie(NULL);
    return 0;
}
