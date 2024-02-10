#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, temp;
    cin >> n;

    vector<int> s;
    for( int i=0; i<n; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }

    int tot=0, c1=0, c2=0, c3=0;
    for( int i=0; i<n; i++)
    {
        if( s[i]==4 )
            tot++;
        else if( s[i]==3 )
            c3++;
        else if( s[i]==2 )
            c2++;
        else
            c1++;
    }

    tot+=c3+(c2/2);
    c1=c1>c3 ? c1-c3:0 ;

    if( c2%2==1 )
    {
        tot++;
        c1 = c1>2 ? c1-2:0 ;
    }

    c1 = c1%4==0 ? c1/4:(c1/4)+1 ;
    tot+=c1;

    cout << tot << endl ;

    return 0;
}