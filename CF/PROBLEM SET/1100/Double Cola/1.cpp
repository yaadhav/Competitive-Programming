#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int i=1, sum=5;

    while( sum<n )
    {
        i*=2;
        sum+=5*i;
    }

    int res= ((sum-n)/i)%5 ;    

    vector<string> s={ "Howard", "Rajesh", "Penny", "Leonard", "Sheldon" } ;

    for( int i=0; i<5; i++)
    {
        if( i==res )
        {
            cout << s[i] << endl;
            break;
        }
    }
    
    return 0;
}