// Q : https://www.codechef.com/START81D/problems/OPMIN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> a;
        int temp, count=1;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        sort( a.begin(), a.end());

        for( int i=1; a[0]==a[i]; i++)
            count++;
        
        cout << n-count << endl ;
    } 
    
    return 0;
}

