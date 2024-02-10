// Q : https://www.hackerrank.com/challenges/acm-icpc-team/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

vector<int> acmTeam(vector<string> topic) {

    vector<int> check;
    int count=0; 
    for( int i=0; i<topic.size(); i++)
    {
        for( int j=i+1; j<topic.size(); j++)
        {
            for( int k=0; k<topic[i].length(); k++)
            {
                if( topic[i][k]=='1' || topic[j][k]=='1' )
                    count++;
            }
            check.push_back(count);
            count=0;
        }
    }

    sort( check.rbegin(), check.rend() );

    vector<int> ans={ check[0], 1};
    for( int i=1; check[0]==check[i]; i++)
        ans[1]++;

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> arr(n);
    for( string &i: arr)
        cin >> i;

    vector<int> result = acmTeam(arr); 
    
    for( int i: result)
        cout << i << " ";

    return 0;
}
