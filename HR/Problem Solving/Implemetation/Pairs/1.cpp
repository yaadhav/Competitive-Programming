#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    
    sort( ar.begin(), ar.end() );
    
    int count=0;    
    for( int i=0; i<n-1; i++)
    {
        if( ar[i]==ar[i+1] )
        {
            count++;
            i++;            
        }
    }
    
    return count ;
}

int main()
{
    int n, temp;
    cin >> n;

    vector<int> ar;

    for( int i=0; i<n; i++)
    {
        cin >> temp ;
        ar.push_back(temp);
    }

    int result=sockMerchant(n, ar);

    cout << result ;
}
