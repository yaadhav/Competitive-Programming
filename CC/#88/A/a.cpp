// Q : https://www.codechef.com/problems/LARGESECOND

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> a;
        int temp;
        
        for(int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        
        sort(a.begin(),a.end(),greater<>());
        
        int x=a[0], y;
        for( int i=1; i<n; i++)
        {
            if( a[i]!=x )
            {
                y=a[i];
                break;
            }
        }
        
        cout << x+y << endl;
    }

    return 0;
}

