#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp;
    cin >> n ;

    vector<int> a;
    a.push_back(0);

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }   

    int count1=0, count2=0;

    for( int i=1; i<=n; i++)
    {
        if( a[i]==i )
            count1++;
        else if( a[a[i]]==i )
            count2++;
    }

    long long sum=0;
    for( int i=1; i<count1; i++)
        sum+=i;
    
    sum+=(count2/2);

    cout << sum ;
    
    return 0;
}