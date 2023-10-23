// Q : https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

vector<int> cutTheSticks(vector<int> arr) {

    sort( arr.begin(), arr.end() );

    int n=arr.size();
    vector<int> ans={n};

    int count=1;
    for( int i=1; i<n; i++)
    {
        if( arr[i]==arr[i-1] )
            count++;
        else
        {
            ans.push_back(n-count);
            count++;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for( int &i: arr)
        cin >> i;

    vector<int> result = cutTheSticks(arr); 
    
    for( int i: result)
        cout << i << " ";

    return 0;
}
