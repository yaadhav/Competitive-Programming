// Q : https://www.codechef.com/problems/ADVITIYA4

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, q;
        string s;

        cin >> n >> q >> s;
        
        ll count=1, max=0;
        for( ll i=0; i<n-1; i++)
        {
            if( s[i]==s[i+1] )
                count++;
            else
            {
                if(count>=max)
                    max=count;
                count=1;
            }
        }
        if(count>max)
            max=count;
            
        cout << max << " ";
            
        string add="", last="";
        last=s[n-1];
        
        for( ll i=0; i<q; i++)
        {
            cin >> add;
            
            if(last==add)
                count++;
            else
                count=1;
                
            if(count>max)
                max=count;
            last=add;
            
            cout << max << " ";
        }
        cout << endl;
    }   

    return 0;
}
