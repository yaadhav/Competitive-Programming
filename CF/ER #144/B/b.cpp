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

        int count=0, tot=0;
        bool intial=0, final=0;
        
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
                    if( i==0 && j==0 )
                        intial=1;
                    if( i==a.length()-1 && j==b.length()-1 )
                        final=1;

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

        if( intial )
            count--;
        if( final )
            count--;

        if( tot<count+1 )
        {
            cout << "No\n" ;
            continue;
        }
        else
            cout << "Yes\n" ;
        
        
        if( !intial )
            cout << "*" ;

        for( int i=0; i<s.size(); i++)
        {
            if( i!=0)
                cout << "*"; 
            cout << s[i] ;
        }

        if( !final )
            cout << "*";

        cout << endl ;
    } 
    
    return 0;
}

