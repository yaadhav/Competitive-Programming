// Q : https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int reverse( int n )
{
    int rev=0;
    while( n>0 )
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }

    return rev;
}

int beautifulDays(int i, int j, int k) {

    int count=0;
    for( int a=i; a<=j; a++)
    {
        int b=reverse(a);
        if( abs(a-b)%k==0 )
            count++;
    }
    return count;
}

int main()
{
    int i, j, k;
    cin >> i >> j >> k;

    int res=beautifulDays( i, j, k);
    cout << res ;
    
    return 0;
}
