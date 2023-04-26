#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q ;

    while(q--)
    {
        int  n, t;
        cin >> n >> t;

        vector<int> a, b;
        int temp;

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp+i);
        }   

        for( int i=0; i<n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }       

        int max=0, ind=0;
        bool check=false;
        for( int i=0; i<n; i++)
        {
            if( b[i]>max && a[i]<=t )
            {
                max=b[i];
                ind=i;
            }

            if(a[i]<=t)
                check=true;
        }

        if(check)
            cout << ind+1 << endl;
        else
            cout << -1 << endl;
    } 
    
    return 0;
}