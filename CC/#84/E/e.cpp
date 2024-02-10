// Q : https://www.codechef.com/problems/MAX1XOR

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
        string s; 
        cin >> n >> s;

        string a="0", b="1";
        int ac=0, bc=1;
        for( int i=1; i<n; i++)
        {
            if( s[i-1]!=a[i-1] )
            {
                a+='1';
                ac++;
            }
            else
                a+='0';

            if( s[i-1]!=b[i-1] )
            {
                b+='1';
                bc++;
            }
            else
                b+='0';            
        }        

        if( ac>bc )
            cout << ac << endl;
        else
            cout << bc << endl;        
    } 
    
    return 0;
}

