// Q : https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    int count=0;
    for( int i=0; i<n; i++)
    {
        for( int j=i+1; j<n; j++)
        {
            if( (ar[i]+ar[j])%k==0 )
                count++;
        }
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr;
    int temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    int res=divisibleSumPairs(n , k, arr);
    cout << res ;

    return 0;
}
    
