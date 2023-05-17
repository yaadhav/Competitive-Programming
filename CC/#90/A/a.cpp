// Q : https://www.codechef.com/problems/PRINTINGBIN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        int temp, k=0;
        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        string ans="YES";
        for(int i=0; i<n-2; i++)
        {
            for( int j=i+1; j<n-1; j++)
            {
                for( int k=i+2; k<n; k++)
                {
                    if( a[k]-a[j]==a[j]-a[i] )
                        ans="NO";
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}

