// Q : https://codeforces.com/contest/1833/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        vector<string> notes;

        for( int i=0; i<n-1; i++)
        {
            bool repeat=false;
            string str="";
            str+=s[i];
            str+=s[i+1];

            for( auto note : notes)
            {
                if( note==str )
                    repeat=true;
            }

            if(!repeat)
                notes.push_back(str);
        }

        cout << notes.size() << endl;
    } 

    return 0;
}