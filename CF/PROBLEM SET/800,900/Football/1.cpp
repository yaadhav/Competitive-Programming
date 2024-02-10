#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, count=1;
    vector<string> team;
    string s;

    cin >> n ;

    for( int i=0; i<n; i++)
    {
        cin >> s;
        team.push_back(s);
    }

    for( int i=1; i<n; i++)
    {
        if( team[0]==team[i] )
            count++;
        else
            s=team[i];
    }

    if( count>(n-count) )
        cout << team[0];
    else    
        cout << s ;
 
    return 0;
}