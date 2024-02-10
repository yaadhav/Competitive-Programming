// Q : https://www.codechef.com/problems/MAXIMSCORE

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
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }       

        int ans, x, y, max;
        for( int i=0; i<n-1; i++)
        {
            if(i==0)
            {
                ans=abs(a[i]-a[i+1]);
                max=ans;
            }
            else if(i<n-2)
            {
                x=abs(a[i]-a[i-1]);
                y=abs(a[i]-a[i+1]);
                max = x>y ? x:y ;
            }
            else
                max = abs(a[i]-a[i+1]);

            if( max<ans )
                ans=max;
        }

        cout << ans << endl;
    } 
    
    return 0;
}

