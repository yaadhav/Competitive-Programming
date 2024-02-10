#include <bits/stdc++.h>
using namespace std;

int Count( vector<vector<int>> a )
{
    int ans=0;
    for( int i=0; i<a.size(); i++)
    {
        for( int j=i+1; j<a.size(); j++)
        {
            int tot=a[i].back()+a[j].back(), l1=a[i].size(), l2=a[j].size();

            if( tot%2==1 ) continue;

            if( a[i].size()<a[j].size() )
            {
                int check=(l2-l1)/2;
                if( a[j][check-1]+a[i].back()==tot/2 )
                    ans++;
                check=(l1+l2)/2;
                if( a[j][check-1]==tot/2 )
                    ans++;
            }
            else if( a[i].size()>a[j].size() )
            {
                int check=(l2-l1)/2;
                if( a[i][check-1]+a[j].back()==tot/2 )
                    ans++;
                check=(l1+l2)/2;
                if( a[i][check-1]==tot/2 )
                    ans++;
            }
            else
            {
                if( a[i].back()==a[j].back() )
                    ans+=2;
            }
        }
    }

    return ans;
}
 
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> odd, even;
    string s;

    for( int i=0; i<n; i++)
    {
        cin >> s;

        vector<int> sums;
        int sum=0;
        for( int i=0; i<s.length(); i++)
        {
            sum+=int(s[i]-'0');
            sums.push_back(sum);
        }
            
        if( s.length()%2==1 )
            odd.push_back(sums);
        else
            even.push_back(sums);
    }

    int ans=n+Count(odd)+Count(even);
    cout << ans << endl;
    
    return 0;
}