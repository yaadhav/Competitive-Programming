// Q : https://codeforces.com/problemset/problem/478/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int temp, sum=0;
    
    for( int i=0; i<5; i++)
    {
        cin >> temp;
        sum+=temp;
    }

    if( sum%5==0 && sum>0 )
        cout << sum/5 ;
    else
        cout << -1 ;   

    return 0;
}