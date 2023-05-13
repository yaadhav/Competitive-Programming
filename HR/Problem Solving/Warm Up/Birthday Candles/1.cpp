// Q : https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {

    sort( candles.begin(), candles.end(), greater<>() );

    int count=0;
    for( auto i : candles)
    {
        if( i==candles[0] )
            count++;
    }

    return count;
}

int main()
{
    vector<int> a;
    int temp;

    for( int i=0; i<5; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    int res=birthdayCakeCandles(a);  
    cout << res ;

    return 0;
}
