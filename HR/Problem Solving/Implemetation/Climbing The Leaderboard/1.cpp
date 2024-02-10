#include <bits/stdc++.h>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {

    vector<int> ans;    
    ranked.erase( unique( ranked.begin(), ranked.end() ), ranked.end() ); 
    ranked.push_back(0);

    int min=ranked.size()-1;
    for( int i=0; i<player.size(); i++)
    {
        if( player[i]>ranked[0] )
        {
            ans.push_back(1) ;
            continue;
        }

        for( int j=min; j>=0; j--)
        {
            if( player[i]==ranked[j] )
            {
                ans.push_back(j+1);
                break;
            }
            else if( player[i]>ranked[j] && player[i]<ranked[j-1] )
            {
                ans.push_back(j+1);
                min=j;
                break;
            }
        }

    }
    return ans;
}

int main()
{
    int m, n , temp;
    vector<int> ranked, player;

    cin >> n;
    for( int i=0; i<n; i++)
    {
        cin >> temp ;
        ranked.push_back(temp);
    }

    cin >> m;
    for( int i=0; i<m; i++)
    {
        cin >> temp ;
        player.push_back(temp);
    }

    vector<int> result = climbingLeaderboard(ranked, player);

    for( auto i: result)
        cout << i << endl ;
}
