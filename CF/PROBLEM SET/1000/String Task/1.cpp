#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s, check="aeiouy";
    cin >> s ;
    
    bool find;
    for( int i=0; i<s.length(); i++)
    {
        s[i]=tolower(s[i]);

        find=false;
        for( int j=0; j<check.length(); j++)
        {
            if( s[i]==check[j])
                find=true;
        }

        if( !find )
        {
            s+=" ";
            for( int j=s.length(); j>i; j--)
                s[j]=s[j-1];
            s[i++]='.';
        }
        else
            s.erase(i--,1);
    }

    cout << s ;

    return 0;
}