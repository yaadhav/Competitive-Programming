#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Combinations( int n, int r)
    {
        unsigned long long int num=1, den=1;
        r = r<=n/2 ? n-r:r ;
        for( int i=n; i>r; i--)
            num*=i;
        for( int i=2; i<=n-r; i++)
            den*=i;
        
        return num/den;        
    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> res={{1}};
        for( int i=1; i<numRows; i++)
        {
            vector<int> row={1};
            for( int j=1; j<i; j++)
                row.push_back(Combinations( i, j));
            row.push_back(1);
            res.push_back(row);
        }

        return res;        
    }
};

int main()
{
    int numRows;
    cin >> numRows;

    Solution sol;
    vector<vector<int>> res = sol.generate(numRows);

    for( auto i : res)
    {
        for( auto j : i )
            cout << j << " ";
        cout << endl;
    }


    return 0;
}