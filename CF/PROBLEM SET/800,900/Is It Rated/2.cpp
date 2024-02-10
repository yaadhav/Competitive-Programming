#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long int n, i; 
    vector<int> a, b;  int A, B ;
    string condition="maybe";

    cin >> n ;

    for( i=0; i<n; i++)
    {
		cin >> A >> B ;
        a.push_back(A);
        b.push_back(B);
    }

    for( i=0; i<n; i++)
    {
		if ( a[i]!=b[i] )
        {
            condition="rated" ;
            cout << condition << endl;
            exit(0);
        }
    }

    sort( a.begin(), a.end(), greater<>() ) ;

    for( i=0; i<n; i++)
    {
		if ( a[i]!=b[i] )
        {
            condition="unrated" ;
            break;
        }
    }
    
    cout << condition << endl;

    cin.tie(NULL);
    return 0;
}
