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
        string s, temp;
        int n, d, i;
        cin >> n >> d >> s ;

        bool check=false;
        vector<int> ans;

        for( i=0; i<n; i++)
        {
            temp=s[i];
            int num=stoi(temp);

            if( d>num && check==false)
            {
                check=true;
                ans.push_back(d);
                i--;
            }
            else
                ans.push_back(num);
        }
        if( check==false )
            ans.push_back(d);

        for( auto i: ans)
            cout << i ;
        cout << endl;

    } 
    
    return 0;
}

