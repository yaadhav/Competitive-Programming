// Q : https://www.codechef.com/problems/ALTTAB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;

    vector<string> s;
    string temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }

    string ans=""; 
    set<string> check ;
    for( int i=n-1; i>=0; i--)
    {
        if( check.find(s[i])==check.end() )
        {
            temp=s[i];
            check.insert(s[i]);
            ans.push_back(temp[temp.length()-2]);
            ans.push_back(temp[temp.length()-1]);
        }
    }  

    cout << ans << endl;     

    return 0;
}

