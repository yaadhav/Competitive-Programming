#include <bits/stdc++.h>
using namespace std;

long long int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {

    sort( keyboards.begin(), keyboards.end(), greater<>() );
    sort( drives.begin(), drives.end(), greater<>() );

    long long int sum=keyboards[keyboards.size()-1]+drives[drives.size()-1];

    if( sum>b )
        return -1;
    
    int i=0, j=0;
    sum=keyboards[i]+drives[j];

    while( sum>b )  {

        if( (keyboards[i]+drives[j+1])==(keyboards[i+1]+drives[j]) )
        {
            if( keyboards[i]<drives[j] )
                i++;
            else
                j++;
        }

        else if( keyboards[i]+drives[j+1]>keyboards[i+1]+drives[j] )
            j++;
        else
            i++;
        sum=keyboards[i]+drives[j];
    }    
    
    return sum;
}


int main()
{
    int b, n, m, temp;
    cin >> b >> n >> m ;

    vector<int> keyboards, drives;

    for( int i=0; i<n; i++)
    {
        cin >> temp ;
        keyboards.push_back(temp);
    }

    for( int i=0; i<m; i++)
    {
        cin >> temp ;
        drives.push_back(temp);
    }

    int result=getMoneySpent( keyboards, drives, b);

    cout << result ;

    return 0;
}
