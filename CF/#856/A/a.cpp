// Q : https://codeforces.com/contest/1794/problem/A

#include <bits/stdc++.h>
using namespace std;

string ReverseOf( string s )
{
    string r="";
    for( int i=s.length()-1; i>=0; i--)
        r+=s[i];

    return r;
}

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
        
        vector<string> a;
        string temp, s;

        for( int i=0; i<2*n-2; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        vector<string> c;
        string ans="YES";

        for( int i=0; i<n-1; i++)
            c.push_back("");

        for( int i=0; i<a.size(); i++)
        {
            int index=a[i].length()-1 ;
            if( c[index].length()!=0 )
            {
                s=ReverseOf(c[index]);
                if( a[i]!=s )
                {
                    ans="NO";
                    break;
                }
            }
            else
                c[index]=a[i];
        }

        cout << ans << endl ;

    } 
    
    return 0;
}

