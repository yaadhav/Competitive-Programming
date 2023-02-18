#include <bits/stdc++.h>
using namespace std;

int formingMagicSquare(vector<vector<int>> s) {

    int cost=0, a;
    cost+=abs(5-s[1][1]);

    int c=3, i=0;
    while( c-- )
    {
        a=s[0][i]+s[2][2-i];
        cost+=abs(10-a);
        i++;
    }

    a=s[1][0]+s[1][2];
    cost+=abs(10-a);

    return cost;
}


int main()
{
    vector<vector<int>> s;
    int temp;

    for( int i=0; i<3; i++)
    {
        vector<int> row;
        for( int j=0; j<3; j++)
        {
            cin>>temp;
            row.push_back(temp);
        }
        s.push_back(row);
    }

    int res=formingMagicSquare(s);
    cout << res;
    
}
