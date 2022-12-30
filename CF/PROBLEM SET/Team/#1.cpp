#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long int n, cases, i, count=0, total=0;
    vector<int> arr;
    int temp;

    cin >> n ;

    for( cases=0; cases<n; cases++)
    {
        for( i=0; i<3; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }

        for( i=0; i<3; i++)
        {
            if( arr[i]==1 )
            count++;
        }

        if( count>1 )
        total++;

        count=0;
        arr.clear();
    }

    cout << total;

    cin.tie(NULL);
    return 0;
}
