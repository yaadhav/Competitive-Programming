// Q : https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int findDigits(int n) {

    int temp=n, res=0;

    while( temp>0 )
    {
        if( temp%10==0 );
        else if( n%(temp%10)==0 )
            res++;
        temp/=10;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    int result = findDigits(n); 
    cout << result << endl;

    return 0;
}
