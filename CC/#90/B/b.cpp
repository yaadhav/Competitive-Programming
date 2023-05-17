// Q : https://www.codechef.com/problems/THREEAPFREE

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

        vector<int> c;
        int temp;
        for( int i=0; i<n; i++)
        {
            cin >> temp;

            if( temp==1 )
                c.push_back(0);
            else
                c.push_back(1);
        }

        for( auto i: c)
            cout << i << " ";
        cout << endl;        
    }

    return 0;
}

