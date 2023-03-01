#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    int t, cases, i;
    vector <int> a; int A ;

    cin >> t ;

    for( cases=0; cases<t; cases++)
    {
        for( i=0; i<3; i++)
        {
            cin >> A;
            a.push_back(A) ;
        }

        sort( a.begin(), a.end() ) ;

        cout << a[1] << endl ;
        a.clear();
    }   
    cin.tie(NULL);
    return 0;
}
