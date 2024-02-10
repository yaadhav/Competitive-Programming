// Q : https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {

    float pos=0, neg=0, zero=0, tot=arr.size();
    for( auto i : arr)
    {
        if(i==0)
            zero++;
        else if(i==abs(i))
            pos++;
        else
            neg++;
    }

    printf( "%.5f\n%.5f\n%.5f", pos/tot, neg/tot, zero/tot );
}


int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    int temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    plusMinus(arr);

    return 0;
}
