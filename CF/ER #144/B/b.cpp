// Q : https://codeforces.com/contest/1796/problem/B

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
        string a, b;
        cin >> a >> b;

        if( a[0]==b[0] )
        {
            cout << "Yes\n" << a[0] << "*\n";
            continue;
        }

        else if( a.back()==b.back() )
        {
            cout << "Yes\n*" << a[0] << "\n";
            continue;
        }

        int count=0, tot=0;
        
        vector<string> s;
        string temp;

        for( int i=0; i<a.length(); i++)
        {
            for( int j=0; j<b.length(); j++)
            {
                if( a[i]=='*' || b[j]=='*')
                    continue;
                    
                temp="";
                while( a[i]==b[j] && i<a.length() && j<b.length() )
                {
                    temp+=a[i];
                    a[i]=b[j]='*';
                    i++;
                    j++;
                }

                if(temp.length()>0)
                {
                    count++;
                    s.push_back(temp);
                    tot+=temp.length();
                }
            }
        }

        if( tot<count+1 )
        {
            cout << "No\n" ;
            continue;
        }
        else
            cout << "Yes\n" ;

        for( int i=0; i<s.size(); i++)
            cout << "*" << s[i] ;

        cout << "*\n" ;
    } 
    
    return 0;
}

