// Q : https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr) {
    
    int max=1, count=1;
    
    sort( arr.begin(), arr.end() );
    int res=arr[0];
    
    for( int i=1; i<=arr.size(); i++)
    {
        if( arr[i]==arr[i-1] )
            count++;
        else
        {
            if( count>max )
            {
                max=count;
                res=arr[i-1];
            }
            count=1;
        }
    }
    
    return res;

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

    int res=migratoryBirds(arr);
    cout << res ;
    
    return 0;
}
