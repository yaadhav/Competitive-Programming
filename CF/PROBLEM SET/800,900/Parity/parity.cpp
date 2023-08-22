#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, k;
    cin >> b >> k;

    int odd=0;
    for( int i=0; i<k-1; i++)
    {
        cin >> a;
        if( (a*b)%2==1 )
            odd++;
    }
    
    cin >> a;
    if( a%2==0 )
        odd++;

    if(odd%2)
        cout << "even";
    else
        cout << "odd"; 
    
    return 0;
}