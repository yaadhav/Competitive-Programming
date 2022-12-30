#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;

    if( n==1 )
    {
        int draw = a==b ? 1 : 0 ;
        
        cout << draw << endl << a <<":"<< b ;
        exit(0);
    }

    int draw = n>a+b ? n-a-b:0 ;
    cout << draw << endl ;

    vector <int> ga, gb;

    int ra=a%n, rb=b%n;
    for(int i=0; i<n; i++)
    {
        ga.push_back(a/n);
        gb.push_back(b/n);
        
        if( ra>0 )
        {   ga[i]++;
            ra--;   }

        if( rb>0 )
        {   gb[i]++;
            rb--;   }
    }

    sort( gb.begin(), gb.end() );

    for( int i=0; i<n-1 && draw==0 ; i++)
    {
        if( ga[i]==gb[i] )
        {
            gb[i]--;
            gb[i+1]++;
        }
    }

    if( ga[n-1]==gb[n-1] )
    {
        gb[n-1]--;
        gb[n-2]++;
    }

    for(int j=0; j<n; j++)
        cout << ga[j] <<":"<< gb[j] << endl;

    return 0;
}
